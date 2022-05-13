#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name
 * @name: pointer to text
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
