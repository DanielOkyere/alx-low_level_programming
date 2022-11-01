#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * using binary search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched for
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r;

	l = 0;
	r = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (b_helper(array, size, value, l, r));
}

/**
 * b_helper - helper function for recursive development
 * @array: array to be checked
 * @size: size of the array
 * @value: value to search for
 * @l: left of array
 * @r: right of the array
 * Return: index of the search item
 */
int b_helper(int *array, size_t size, int value, size_t l, size_t r)
{
	size_t m;
	int *p_start;

	if (l > r)
		return (-1);
	m = (l + r) / 2;
	if (array[m] < value)
	{
		l = m + 1;
		p_start = array;
		p_array(p_start, l, r);
		return (b_helper(array, size, value, l, r));
	}
	else if (array[m] > value)
	{
		r = m - 1;
		p_start = array;
		p_array(p_start, l, r);
		return (b_helper(array, size, value, l, r));
	}
	else
		return (m);
}

/**
 * p_array - print array
 * @arr: array start
 * @l: left
 * @r: right
 */
void p_array(int *arr, size_t l, size_t r)
{
	int i, arr_size;

	printf("Searching in array: ");
	arr_size = ((int)r - (int)l) + 1;

	for (i = l; i <= arr_size; i++)
	{
		printf("%d", arr[i]);
		if (i != arr_size)
			printf(", ");
	}
	printf("\n");
}

