#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: bytes to include of s2
 * Return: Null if fail else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int strlen, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen = (unsigned int)_strlen(s1);
	p = malloc((strlen + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0, c = 0; i < (strlen + n); i++)
	{
		if (i < strlen)
			p[i] = s1[i];
		else
			p[i] = s2[c++];
	}
	p[i] = '\0';

	return (p);
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
