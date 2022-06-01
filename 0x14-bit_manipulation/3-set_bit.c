#include "main.h"
/**
 * set_bit - Gets the value of a bit at given index
 * @n: bit
 * @index: index of value
 * Return: index of bit, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
