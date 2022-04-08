#include <stdio.h>

/**
 * main - main block
 * Description: Function prints all base 16 digits
 * Return: 0
 */

int main(void)
{
	int firstInteger;
	char firstCharacter;

	for (firstInteger = 0; firstInteger < 10; firstInteger++)
	{
		putchar(firstInteger + '0');
	}
	for (firstCharacter = 'a'; firstCharacter < 'g'; firstCharacter++)
	{
		putchar(firstCharacter);
	}
	putchar('\n');

	return (0);
}
