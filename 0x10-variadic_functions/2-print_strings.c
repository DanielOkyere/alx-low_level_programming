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

	va_start(ptr, n);
	if (separator == NULL || n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		if (va_arg(ptr, char *) != NULL)
		{
			printf("%s", va_arg(ptr, char *));
		}
		else
			printf("(nil)");
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
