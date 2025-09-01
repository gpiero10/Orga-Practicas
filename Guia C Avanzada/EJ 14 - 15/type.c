//type.c
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "type.h"

fat32_t* new_fat32(){
    fat32_t* puntero_a_archivo = malloc(sizeof(fat32_t));
    return puntero_a_archivo; 
}

ext4_t* new_ext4(){
    ext4_t* puntero_a_archivo = malloc(sizeof(ext4_t));
    return puntero_a_archivo; 
}

ntfs_t* new_ntfs(){
    ntfs_t* puntero_a_archivo = malloc(sizeof(ntfs_t));
    return puntero_a_archivo; 
}

fat32_t* copy_fat32(fat32_t* file){
    fat32_t *copia = malloc(sizeof(fat32_t));
    *copia = *file;

    return copia;
}


ext4_t* copy_ext4(ext4_t* file){
    ext4_t *copia = malloc(sizeof(ext4_t));
    *copia = *file;

    return copia;
}

ntfs_t* copy_ntfs(ntfs_t* file){
    ntfs_t *copia = malloc(sizeof(ntfs_t));
    *copia = *file;

    return copia;
}

void rm_fat32(fat32_t* file){
    free(file);
}

void rm_ext4(ext4_t* file){
    free(file);
}

void rm_ntfs(ntfs_t* file){
    free(file);
}