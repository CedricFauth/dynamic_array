#include <stdlib.h>
#include <stdio.h>
#include "dyn_array.h"

struct d_array {
    int size;
    int used;
    void** element_ptrs;
};

d_array* d_array_new(unsigned int size){
    d_array* array = malloc(sizeof(d_array));
    array->size = size;
    array->used = 0;
    array->element_ptrs = malloc(array->size * sizeof(void*));
    return array;
}

void d_array_add(d_array* array, void* ptr){
    if(array->used >= array->size){
        array->size *= 2;
        array->element_ptrs = realloc(array->element_ptrs, array->size * sizeof(void*));
    }
    array->element_ptrs[array->used++] = ptr;
}

void* d_array_get(d_array* array, int index){
    return array->element_ptrs[index];
}

int d_array_size(d_array* array){
    return array->size;
}

void d_array_free(d_array* array){
    for(int i = 0; i < array->used; i++){
        free(array->element_ptrs[i]);
    }
    free(array->element_ptrs);
    free(array);
}
