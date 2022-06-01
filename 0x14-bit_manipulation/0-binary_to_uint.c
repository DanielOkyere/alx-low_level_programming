#include "main.h"
/**
 * binary_to_uint - binary to unint
 * @b: char pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c;

	if (b == NULL)
		return (0);
	for (c = 0; *b; b++)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		if (*b == '1')
			c = (c << 1) | 1;
		else
			if (*b == '0')
				c <<= 1;
			else
			{
				c += 0;
				break;
			}
	}
	return (c);
}
