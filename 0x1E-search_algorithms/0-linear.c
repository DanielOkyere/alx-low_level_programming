#include "search_algos.h"

/**
 * linear_search - Searches for a value using
 * linear search
 * @array: pointer to first element
 * @size: size of the array
 * @value: value to be searched for in the list
 * Return: first index where value is located or -1 if otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i != size)
	{
		printf("Value checked array[%lu] = [%d]\n",
				i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
