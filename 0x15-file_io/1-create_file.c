#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content of text
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	n = write(fd, text_content, strlen(text_content));
	if (n == -1)
		return (-1);

	close(fd);
	return (1);
}
