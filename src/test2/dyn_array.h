#ifndef DYN_ARRAY
#define DYN_ARRAY

typedef struct d_array d_array;

d_array* d_array_new(unsigned int size);

void d_array_add(d_array* array, void* ptr);

void* d_array_get(d_array* array, int index);

int d_array_size(d_array* array);

void d_array_free(d_array* array);

#endif