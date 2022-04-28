#include "main.h"

/**
 * _pow_recursion - return the val x raised to pow y
 * @x: number
 * @y: number
 * Return: x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y-1));
}
