#include "main.h"

/**
 * swap_int - swap int
 * @a: pointer to first value
 * @b: pointer to second value
 * Description: Swaps the postion of 2 values
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
