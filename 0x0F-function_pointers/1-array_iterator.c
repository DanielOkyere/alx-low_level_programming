#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes function on every element of
 * array
 * @array: array
 * @size: size of array
 * @action: callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
