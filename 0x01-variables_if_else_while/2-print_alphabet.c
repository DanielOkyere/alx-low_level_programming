#include <stdio.h>

/**
 * main - main block
 * Description: Funtion prints out every alphabet.
 * Return: 0
 */

int main(void)
{
	char character = 'a';

	for (character = 'a'; character <= 'z'; ++character)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
