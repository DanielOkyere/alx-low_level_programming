#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints the number and a new line
 * @separator: char pointer
 * @n: total numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	if (separator == NULL || n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
	va_end(ptr);
}
