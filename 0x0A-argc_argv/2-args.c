#include <stdio.h>

/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
