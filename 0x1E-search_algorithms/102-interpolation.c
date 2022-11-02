#include "search_algos.h"

/**
 * interpolation_search - searches using the interpolation
 * algorithm
 * @array: pointer to the first element of the array
 * @size: The size of the array
 * @value: The value to search for.
 * Return: -1 if null or first index where value exist
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t p, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= 1;)
	{
		p = low + (((double)(high - 1) / (array[high] - array[low])
					* (value - array[low])));
		if (p < size)
			printf("Value checked array[%ld] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", p);
			break;
		}

		if (array[p] == value)
			return (p);
		if (array[p] > value)
			high = p - 1;
		else
			low = p + 1;
	}
	return (-1);
}
