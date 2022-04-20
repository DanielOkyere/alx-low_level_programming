#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print_rev
 * @s: char pointer
 * Description: prints the revers of a string
 * Return: void
 */

void print_rev(char *s)
{
	int i = strlen(s);

	while (i > 0)
	{
		putchar((int)s[i]);
		i--;
	}
	putchar('\n');
}
