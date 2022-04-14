#include "main.h"

/**
 * more_numbers - more_numbers function
 * Description: Prints numbers from 0 to 9
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
