#ifndef _FUNCTION_POINTER_H
#define _FUNCTION_POINTER_H
#include <stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
#endif
