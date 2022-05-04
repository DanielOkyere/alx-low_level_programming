#include <stdio.h>

/**
 * main - main function prints arg[0]
 * @argc: argc
 * @argv: Array
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);
	return (0);
}
