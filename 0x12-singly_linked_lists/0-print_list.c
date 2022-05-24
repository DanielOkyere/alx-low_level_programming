#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints the size of list
 * @h: (list_t)
 * Return: list_t
 */
size_t print_list(const list_t *h)
{
	const list_t *hptr;
	size_t c;

	c = 0;
	hptr = h;
	while (hptr != NULL)
	{
		if (hptr->str != NULL)
			printf("[%d] %s\n", hptr->len, hptr->str);
		else
			printf("[0] (nil)\n");
		hptr = hptr->next;
		c++;
	}
	return (c);
}
