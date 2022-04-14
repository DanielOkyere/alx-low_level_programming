#include "main.h"

/**
 * print_line - print_line
 * @n: (n) int
 * Description: Prints out n number of lines
 * Return: void
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
