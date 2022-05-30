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

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (0);

	wd = write(STDOUT_FILENO, buffer, rd);

	if (wd == -1 || rd != wd)
		return (0);

	free(buffer);
	close(fd);

	return (wd);
}
