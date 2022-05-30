#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: file name
 * @text_content: content to be appended to text
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY, 0600);
		if (fd != -1)
			return (1);
		else
			return (-1);
	}
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	n = write(fd, text_content, strlen(text_content));
	if (n == -1)
		return (-1);
	close(fd);
	return (1);
}
