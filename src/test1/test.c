#include <stdlib.h>
#include <stdio.h>
#include "dyn_array.h"

void test(){
    d_array* array = d_array_new(4);
    d_array_add(array, "Token_1", 123);
    printf("%d\n", d_array_size(array));
    d_array_add(array, "Token_2", 123);
    printf("%d\n", d_array_size(array));
    d_array_add(array, "Token_3", 123);
    printf("%d\n", d_array_size(array));
    d_array_add(array, "Token_4", 123);
    printf("%d\n", d_array_size(array));
    d_array_add(array, "Token_5", 123);
    printf("%d\n", d_array_size(array));
    d_array_add(array, "Token_6", 123);
    printf("%d\n", d_array_size(array));
    d_array_print(array);
    d_array_free(array);
}

int main(){
    test();
}
