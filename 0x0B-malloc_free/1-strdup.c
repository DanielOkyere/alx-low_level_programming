#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int _strlen(char *c);

/**
 * _strdup - creates a copy
 * @str: string to be copied
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *sptr;
	int i = 0;

	if (str == NULL)
		return (NULL);
	sptr = malloc((sizeof(char) * _strlen(str)) + 1);
	if (sptr == NULL)
		return (NULL);
	while (i < _strlen(str))
	{
		sptr[i] = str[i];
		i++;
	}

	return (sptr);
}

/**
 * _strlen - checks stringlength
 * @c: char
 * Return: int
 *
 */
int _strlen(char *c)
{
	char *p = c;

	while (*p != '\0')
		p++;

	return (p - c);
}
