#include "main.h"

/**
 * flip_bits - finds number of bits to be flipped
 * to get from another number
 * @n: (unsigned long int) number
 * @m: (unsigned long int ) number to flip to
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int bit = 0;

	while (x > 0)
	{
		bit += (x & 1);
		x >>= 1;
	}
	return (bit);
}
