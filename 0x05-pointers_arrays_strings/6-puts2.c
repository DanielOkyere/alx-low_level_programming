#include "main.h"
#include <stdio.h>

/**
 * puts2 - print one char out of 2 fo a string
 * @str: char array string type
 * Descrption: Print 1st char, then 3, then 5th
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
