#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print_to_98
 * @n: int number to be printed
 * Description: prints a number from n upto 98
 * Return: void
 */

void print_to_98(int n)
{
	int i = 0;

	if (n == 98)
	{
		printf("%d", n);
		return;
	}
	else
	{
		for (i = n; n <= 98; n++)
		{
			printf("%d, ", i);
		}
	}
}
