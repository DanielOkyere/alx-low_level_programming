#include "main.h"
/**
 * print_binary - prints binary from number
 * @n: long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
