#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - string concat
 * @s1: string 1
 * @s2: string 2
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *nwptr;
	int str1;
	int str2;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str1 = _strlen(s1);
	str2 = _strlen(s2);

	nwptr = malloc(sizeof(char) * (str1 + str2 + 1));
	if (nwptr == NULL)
		return (NULL);

	while (i < (str1 + str2))
	{
		if (i >= str1)
		{
			nwptr[i] = s2[j];
			j++;
			i++;
		}
		else
		{
			nwptr[i] = s1[i];
			i++;
		}
	}
	return (nwptr);
}

/**
 * _strlen - stringlength
 * @c: char
 * Return: int
 */
int _strlen(char *c)
{
	char *p = c;

	while (*p != '\0')
		p++;

	return (p - c);
}
