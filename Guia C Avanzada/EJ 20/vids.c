#include <stdio.h>
#include <stdint.h>
#define VIDEO_COLS 80
#define VIDEO_FILS 50

// Cada posicion de memoria tiene 2 bytes
typedef struct ca_s {
    uint8_t c; // caracter
    uint8_t a; // atributos
} ca;

void screen_draw_layout(void) {
    // VIDEO es un puntero a la dirección de memoria del buffer de video
    int* VIDEO = NULL; // ejemplo
    ca(*p)[VIDEO_COLS] = (ca(*)[VIDEO_COLS])VIDEO;
    uint32_t f,c;
    for (f = 0; f < VIDEO_FILS; f++) {
        for (c = 0; c < VIDEO_COLS; c++) {
            p[f][c].c = ' ';
            p[f][c].a = 0x10;
        }
    }
}

/*
1) ¿Qué hace ca(*p)[VIDEO_COLS] = (ca(*)[VIDEO_COLS])VIDEO;?

Tipo de p: p es puntero a “arreglo de VIDEO_COLS elementos de tipo ca”.
Es decir, p tiene tipo ca (*)[VIDEO_COLS].

El cast: (ca(*)[VIDEO_COLS])VIDEO le dice al compilador:
“Tratá la dirección VIDEO como si apuntara al primer renglón de una grilla cuyos renglones tienen VIDEO_COLS celdas (ca) cada uno”.

Intención: No copia ni transforma memoria; solo reinterpreta el bloque lineal de memoria de video como una matriz 2D de ca con tamaño de fila conocido en compilación.

Resultado: podés usar sintaxis 2D p[f][c] con aritmética correcta de filas/columnas.

2) ¿Por qué funciona p[f][c].c = ' ';? (desreferenciación paso a paso)

Recordá que a[b] es azúcar sintáctica de *(a + b). Entonces:

p tiene tipo ca (*)[VIDEO_COLS] (puntero a fila de VIDEO_COLS ca).

p[f] ≡ *(p + f):

Aritmética: avanzar f filas.
El “salto” es sizeof(ca[VIDEO_COLS]) (toda una fila).

Tipo de p[f]: es un arreglo de VIDEO_COLS ca (lvalue de tipo ca [VIDEO_COLS]).
En la siguiente operación, ese arreglo decae a ca* (puntero al primer ca de la fila).

p[f][c] ≡ * ( (p[f]) + c ) ≡ * ( (*(p + f)) + c ):

Ahora avanzás c columnas dentro de la fila (saltos de sizeof(ca)).

El resultado es un lvalue de tipo ca (la celda en (f,c)).

p[f][c].c:

Accedés al campo c del struct ca en esa celda y le asignás ' '.

En una sola línea, la expansión completa es:

(*(*(p + f) + c)).c = ' ';


Clave: como p es “puntero a arreglo de VIDEO_COLS”, el salto por fila es del tamaño de toda la fila. Por eso p[f][c] cae exactamente en el elemento (f,c).

3) ¿Qué pasaría si en vez de ca(*p)[VIDEO_COLS] hubiéramos declarado ca** p?

ca** es puntero a puntero a ca, que modela típicamente una matriz de punteros (arreglo de punteros a filas). Eso no es lo mismo que un bloque 2D contiguo.

Con ca** p, la expresión p[f] lee (desde memoria) un puntero ca* a la fila f.
Pero tu buffer de video es un bloque contiguo de ca, no un arreglo de punteros al inicio.
O sea, estarías interpretando los primeros bytes del buffer como si fueran punteros, lo cual es basura/azar.

Luego p[f][c] intentaría desreferenciar esa “dirección basura” + c, produciendo accesos inválidos y corrupción/segfault.

En resumen:

ca (*p)[VIDEO_COLS] → ✔️ correcto para memoria contigua 2D con ancho fijo por fila.

ca** p → ❌ incorrecto aquí (solo sirve si realmente tenés un arreglo de punteros a filas inicializado uno por uno).

Alternativas correctas:

Seguir con ca (*p)[VIDEO_COLS] y usar p[f][c].

O usar un 1D: ca *p = (ca*)VIDEO; y acceder como p[f*VIDEO_COLS + c].
*/