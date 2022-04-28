#include "main.h"
int helper_function(int a, int b);

/**
 * is_prime_number - checks if number is prime number
 * @n: number to check
 * Return: 1 if prime number else return 0
 */

int is_prime_number(int n)
{
	return (helper_function(n, 2));
}

/**
 * helper_function - function to help
 * @a: number
 * @b: number of power
 * Return: 0
 */
int helper_function(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (helper_function(a, b + 1));
}
