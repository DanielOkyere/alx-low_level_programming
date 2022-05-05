#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates and array of chars
 * @size: int
 * @c: char
 * Return: pointer of char
 */

char *create_array(unsigned int size, char c)
{
	char *sptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	sptr = malloc(sizeof(c) * size);
	if (sptr == NULL)
		return (NULL);
	while (i < size)
	{
		sptr[i] = c;
		i++;
	}
	return (sptr);
}
