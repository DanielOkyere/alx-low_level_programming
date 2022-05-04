#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n ","Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
