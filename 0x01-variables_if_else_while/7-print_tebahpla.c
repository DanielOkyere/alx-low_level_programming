#include <stdio.h>

/**
 * main - main block
 * Description: Funtion prints out every alphabet in reverse.
 * Return: 0
 */

int main(void)
{
	char character = 'z';

	for (character = 'z'; character >= 'a'; --character)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
