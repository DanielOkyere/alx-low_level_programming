#include "main.h"
/**
 * print_to_98 - print_to_98
 * @n: int number to be printed
 * Description: prints a number from n upto 98
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	_putchar('\n');
}
