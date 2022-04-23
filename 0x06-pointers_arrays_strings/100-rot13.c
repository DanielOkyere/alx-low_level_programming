#include "main.h"

/**
 * rot13 - rot13 encoding
 * @s: string
 * Return: the pointer dest
 */

char *rot13(char *s)
{
	int k = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + k) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + k) == alphabet[i])
			{
				*(s + k) = rot13[i];
				break;
			}
		}
		k++;
	}

	return (s);
}
