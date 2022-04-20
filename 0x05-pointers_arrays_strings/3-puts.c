#include "main.h"
#include <stdio.h>

/**
 * _puts - _puts function
 * @str: char pointer str
 * Description: Prints out a string followed by new line
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
