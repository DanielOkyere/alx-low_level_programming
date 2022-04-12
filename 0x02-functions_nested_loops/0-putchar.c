#include "main.h"

/**
 * main - main block
 * Description: prints `putchar`
 * Return: 0
 */

int main(void)
{
	char printPuchar[] = "_putchar";
	int i = 0;

	while (printPuchar != '\o')
	{
		_putchar(printPuchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
