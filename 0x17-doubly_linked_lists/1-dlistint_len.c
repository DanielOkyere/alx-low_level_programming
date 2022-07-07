#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a
 * linked list
 * @h: head node
 * Return: size_t number of elements of a string
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
