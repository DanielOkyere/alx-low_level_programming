#include "main.h"
/**
 * get_endianness - gets endianness
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int i = 1;
	char *p = (char *) & i;

	if (p[0] == 1)
		return (1);
	else
		return (0);
}
