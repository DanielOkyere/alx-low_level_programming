#include "main.h"

/**
 * print_line - print_line
 * @n: (n) int
 * Description: Prints out n number of lines
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
		return;
	}

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
