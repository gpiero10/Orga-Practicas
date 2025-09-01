//list.c
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "list.h"

list_t* listNew(type_t t) {
    list_t* l = malloc(sizeof(list_t));
    l->type = t; // l->type es equivalente a (*l).type
    l->size = 0;
    l->first = NULL;
    return l;
}

void listAddFirst(list_t* l, void* data) {
    node_t* n = malloc(sizeof(node_t));
    switch(l->type) {
        case TypeFAT32:
        n->data = (void*) copy_fat32((fat32_t*) data);
        break;
        case TypeEXT4:
        n->data = (void*) copy_ext4((ext4_t*) data);
        break;
        case TypeNTFS:
        n->data = (void*) copy_ntfs((ntfs_t*) data);
        break;
    }
    n->next = l->first;
    l->first = n;
    l->size++;
}

//se asume: i < l->size
void* listGet(list_t* l, uint8_t i){
    node_t* n = l->first;
    for(uint8_t j = 0; j < i; j++)
    n = n->next;
    return n->data;
}

//se asume: i < l->size
void* listRemove(list_t* l, uint8_t i){
    node_t* tmp = NULL;
    void* data = NULL;
    if(i == 0){
        data = l->first->data;
        tmp = l->first;
        l->first = l->first->next;
    }else{
        node_t* n = l->first;
        for(uint8_t j = 0; j < i - 1; j++)
            n = n->next;
            data = n->next->data;
            tmp = n->next;
            n->next = n->next->next;
    }
    free(tmp);
    l->size--;
    return data;
}

void listDelete(list_t* l){
    node_t* n = l->first;
    
    while(n){
        node_t* tmp = n;
        n = n->next;
        switch(l->type) {
            case TypeFAT32:
            rm_fat32((fat32_t*) tmp->data);
            break;
            case TypeEXT4:
            rm_ext4((ext4_t*) tmp->data);
            break;
            case TypeNTFS:
            rm_ntfs((ntfs_t*) tmp->data);
            break;
        }
        free(tmp);
    }

    free(l);
}

void listExchange(list_t* lista, int n, int m){
    if (lista->size <= 1){
        return;
    } else if (n == m){
        return;
    } else {
        // Se asume: n != m, 0 <= n,m < lista->size
        if (n > m) {
            int tmp = n;
            n = m;
            m = tmp;
        }

        // Caso especial: n == 0 (la cabeza se mueve)
        if (n == 0) {
            node_t *nodo_n = lista->first;
            node_t *anterior_m = lista->first;
            for (int j = 0; j < m - 1; j++) {
                anterior_m = anterior_m->next;
            }
            node_t *nodo_m = anterior_m->next;

            // Si son adyacentes (n=0, m=1)
            if (nodo_n->next == nodo_m) {
                nodo_n->next = nodo_m->next;
                nodo_m->next = nodo_n;
                lista->first = nodo_m;
            } else {
                node_t *temp = nodo_m->next;
                lista->first = nodo_m;
                nodo_m->next = nodo_n->next;
                anterior_m->next = nodo_n;
                nodo_n->next = temp;
            }
        } else {
            // Caso general
            node_t *anterior_n = lista->first;
            for (int i = 0; i < n - 1; i++) {
                anterior_n = anterior_n->next;
            }
            node_t *nodo_n = anterior_n->next;

            node_t *anterior_m = lista->first;
            for (int j = 0; j < m - 1; j++) {
                anterior_m = anterior_m->next;
            }
            node_t *nodo_m = anterior_m->next;

            // Si son adyacentes
            if (nodo_n->next == nodo_m) {
                nodo_n->next = nodo_m->next;
                anterior_n->next = nodo_m;
                nodo_m->next = nodo_n;
            } else {
                node_t *temp = nodo_m->next;
                anterior_n->next = nodo_m;
                nodo_m->next = nodo_n->next;
                anterior_m->next = nodo_n;
                nodo_n->next = temp;
            }
        }
    }
}
