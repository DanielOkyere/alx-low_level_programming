#include "main.h"

/**
 * _puts_recursion - prints string using recursion
 * @s: char string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
