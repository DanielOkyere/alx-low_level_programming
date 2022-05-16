#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_strings - prints string
 * @separator: separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s = va_arg(ptr, char *));

	if (separator == NULL)
		return;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
			printf("(nil)");
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
