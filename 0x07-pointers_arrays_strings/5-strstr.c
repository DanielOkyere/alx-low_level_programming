#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the haystack.
 * @haystack: string to search
 * @needle: particular string to look for
 * Return: pointer to begining of string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (haystack; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
