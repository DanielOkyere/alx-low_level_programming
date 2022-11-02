#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int b_helper(int *array, size_t size, int value, size_t l, size_t r);
void p_array(int *arr, size_t l, size_t r);
int jump_search(int *array, size_t size, int value);
#endif
