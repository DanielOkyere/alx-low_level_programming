#include "main.h"

/**
 * read_textfile - reads the text file
 * @filename: file name to read from
 * @letters: number of letters to read
 * Return: 0 if `filename` is NULL, 0 if write fails or
 * return unexpected number of bytes, The actual number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wd;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	rd = read(fd, buffer, letters);
	wd = write(STDOUT_FILENO, buffer, rd);

	close(fd);
	free(buffer);

	return (wd);
}
