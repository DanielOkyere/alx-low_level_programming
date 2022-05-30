#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
