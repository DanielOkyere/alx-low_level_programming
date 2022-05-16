#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ",2, "Jay", "DJango");
	printf("------- null added-----\n");
	print_strings(NULL,2, "","");
	return (0);
}
