#include "main.h"
#include <stdio.h>

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * printfail - helper function to print fail message
 * @arg: argument to be printed
 * @flag: helps print different message
 * Return: void
 */
void printfail(void *arg, int flag)
{
	if (flag > 0)
		dprintf(SE, "Error: Can't write to %s\n", *arg);
	dprintf(SE, "Error: Can't read from file %s\n", *arg);
}
/**
 * main - copies content of file to another file
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: always true
 */
int main(int argc, char *argv[])
{
	int ifd, ofd, ist, ost;
	char buf[MAXSIZE];

	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	ifd = open(argv[1], O_RDONLY);
	if (ifd == -1)
		printfail(argv[1], 0), exit(98);
	ofd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ofd == -1)
		printfail(argv[2], 0), exit(99);
	do {
		ist = read(ifd, buf, MAXSIZE);
		if (ist == -1)
			printfail(argv[1], 0), exit(98);
		if (ist > 0)
		{
			ost = write(ofd, buf, (ssize_t) ist);
			if (ost == -1)
				printfail(argv[2], 1), exit(99);
		}
	} while (ist > 0);
	ist = close(ifd);
	if (ist == -1)
		dprintf(SE, "Error: Can't close fd %d\n", ifd), exit(100);
	ost = close(ofd);
	if (ost == -1)
		dprintf(SE, "Error: Can't close fd %d\n", ofd), exit(100);
	return (0);
}
