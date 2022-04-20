#include "main.h"

/**
 * _strlen - _strlen
 * @s: char pointer
 * Description: Prints the stringlength
 * Return: int
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}
	return (p - s);
}
