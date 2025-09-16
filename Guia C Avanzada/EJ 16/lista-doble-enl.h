#include "type.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct node{
    void* data;
    struct node* next;
    struct node* previous;
} node_t;

typedef struct list {
    type_t type;
    uint8_t size;
    node_t* first;
    node_t* last;
} list_t;


list_t* listNew(type_t t);
void listAddFirst(list_t* l, void* data); //copia el dato
void* listGet(list_t* l, uint8_t i); //se asume: i < l->size
void* listRemove(list_t* l, uint8_t i); //se asume: i < l->size
void listDelete(list_t* l);
void listExchange(list_t* lista, int n, int m);