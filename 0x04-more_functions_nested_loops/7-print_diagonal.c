#include "main.h"

/**
 * print_line - print_line
 * @n: (n) int
 * Description: Prints out n number of lines
 * Return: void
 */

void print_line(int n)
{
	int i = 1;
	int j = 0;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
