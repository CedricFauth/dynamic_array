#include <stdlib.h>
#include <stdio.h>
#include "dyn_array.h"

struct d_array {
    int size;
    int used;
    token* tokens;
};

d_array* d_array_new(unsigned int size){
    d_array* array = malloc(sizeof(d_array));
    array->size = size;
    array->used = 0;
    array->tokens = malloc(array->size * sizeof(token));
    return array;
}

void d_array_add(d_array* array, char* name, int type){
    if(array->used >= array->size){
        array->size *= 2;
        array->tokens = realloc(array->tokens, array->size * sizeof(token));
    }
    array->tokens[array->used].name = name;
    array->tokens[array->used++].type = type;
}

void d_array_print(d_array* array){
    printf("[ ");
    for(int i = 0; i < array->used; i++){
        printf("'%s' ", array->tokens[i].name);
    }
    printf("]\n");
}

int d_array_size(d_array* array){
    return array->size;
}

void d_array_free(d_array* array){

    free(array->tokens);
    free(array);
}
