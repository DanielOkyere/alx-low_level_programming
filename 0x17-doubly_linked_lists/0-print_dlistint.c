#include "lists.h"

/**
 * print_dlistint - prints all elements in doubly
 * linked list
 * @h: list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *hpr;
	size_t count;

	hpr = h;
	count = 0;

	while (hpr && hpr->prev)
		hpr = hpr->prev;

	for (count = 0; hpr; count++, hpr = hpr->next)
		printf("%d\n", hpr->n);

	return (count);
}
