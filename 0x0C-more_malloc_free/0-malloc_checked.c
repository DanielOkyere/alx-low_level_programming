#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - creates memory allocation
 * @b: unsigned it
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *nwptr;

	nwptr = malloc(b);

	if (nwptr == NULL)
		exit(98);

	return (nwptr);
}
