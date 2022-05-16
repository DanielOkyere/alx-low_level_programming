#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers(NULL,4,9,90,30,1);
	print_numbers(",", 4, 0, 98, -1024, 402);
	return (0);
}
