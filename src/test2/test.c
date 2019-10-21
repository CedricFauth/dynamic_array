#include <stdlib.h>
#include <stdio.h>
#include "dyn_array.h"

typedef struct Token {
    char* name;
    int type;
} Token;

void test(){

    int SIZE = 30;

    d_array* array = d_array_new(4);

    for(int i = 0; i < SIZE; i++){
        Token* tok = malloc(sizeof(Token));
        tok->name = "Token";
        tok->type = i;
        d_array_add(array, tok);
        printf("%d\n", d_array_size(array));
    }

    for(int i = 0; i < SIZE; i++){
        Token* tok = (Token*)d_array_get(array,i);
        printf("%d\n", tok->type);
    }

    d_array_free(array);
}

int main(){
    test();
}
