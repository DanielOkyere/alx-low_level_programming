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

	if (h == NULL || h->prev != NULL)
		return (0);
	hpr = h;
	count = 1;

	while (hpr->next != NULL)
	{
		printf("%d\n", hpr->n);
		hpr = hpr->next;
		printf("%d\n", hpr->n);
		count++;
	}

	return (count);
}
