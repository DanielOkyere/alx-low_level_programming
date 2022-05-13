#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer index
 * @array: array to be searched
 * @size: size of array
 * @cmp: compare values
 * Return: -1 if no element matches or index of firs element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}

	return (-1);
}
