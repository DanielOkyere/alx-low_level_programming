#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sums all arguments provided
 * @n: const n, number of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int Sum = 0;
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		Sum += va_arg(ptr, int);

	va_end(ptr);

	return (Sum);
}
