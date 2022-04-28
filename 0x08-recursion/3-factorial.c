#include "main.h"

/**
 * factorial - return factorial of a given numbr
 * @n: int number
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
