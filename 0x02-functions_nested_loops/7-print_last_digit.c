#include "main.h"

/**
 * print_last_digit - print_last_digit function
 * @n: int value to determine last number
 * Description: prints the last number
 * Return: int
 */

int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}
