#include "main.h"
/**
 * print_to_98 - print_to_98
 * @n: int number to be printed
 * Description: prints a number from n upto 98
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; n <= 98; n++)
	{
		if (i == 98)
		{
			_putchar(i);
			break;
		}
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
}
