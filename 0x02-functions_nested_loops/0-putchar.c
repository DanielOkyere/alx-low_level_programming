#include "main.h"

/**
 * main - main block
 * Description: prints `putchar`
 * Return: 0
 */

int main(void)
{
	char printPuchar[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(printPuchar[i]);
	}
	_putchar('\n');
	return (0);
}
