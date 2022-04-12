#include "main.h"
/**
 * print_to_98 - print_to_98
 * @n: int number to be printed
 * Description: prints a number from n upto 98
 * Return: int
 */

int print_to_98(int n)
{
	while (n != 0 && n <=98)
	{
		_putchar(n + '0');
		_putchar(',');
	}
	return (1);
}
