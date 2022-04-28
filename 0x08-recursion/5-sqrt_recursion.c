#include "main.h"
int helper_function(int c, int i);

/**
 * _sqrt_recursion - return natural square root of number
 * @n: int number
 * Return: if no natural sqrt -1. Else natural root
 */
int _sqrt_recursion(int n)
{
	return (helper_function(n, 1));
}

/**
 * helper_function - helps solve _sqrt_recursion
 * @c: number to determin sqrt
 * @i: count
 * Return: sqrt if natural root, or -1 if none
 */
int helper_function(int c, int i)
{
	int sqr;

	sqr = i * i;
	if (sqr == c)
		return (i);
	else if (sqr < c)
		return (helper_function(c, i + 1));
	else
		return (-1);
}
