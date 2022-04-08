#include <stdio.h>

/**
 * main - main block
 * Description: Prints numbers of base10
 * Return: 0
 */

int main(void)
{
	int base10values;

	for (base10values = 0; base10values < 10; base10values++)
	{
		printf("%i", base10values);
	}
	putchar('\n');

	return (0);
}
