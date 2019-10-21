#ifndef DYN_ARRAY
#define DYN_ARRAY

typedef struct d_array d_array;

typedef struct token {
    char* name;
    int type;
} token;

d_array* d_array_new(unsigned int size);

void d_array_add(d_array* array, char* name, int type);

void d_array_print(d_array* array);

int d_array_size(d_array* array);

void d_array_free(d_array* array);

#endif