#include <stdio.h>

/**
 * main - main block
 * Description: Funtion prints lower case and uppercase
 * of every alphabet.
 * Return: 0
 */

int main(void)
{
	char lower_character = 'a';
	char upper_character = 'A';

	for (lower_character = 'a'; lower_character <= 'z'; ++lower_character)
	{
		putchar(lower_character);
	}
	for (upper_character; upper_character <= 'Z'; ++upper_character)
	{
		putchar(upper_character);
	}
	putchar('\n');
	return (0);
}
