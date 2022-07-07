#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: Head node
 * @index: Index of node
 * Return: dlistint_t* nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *hptr;

	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	hptr = head;
	for (count = 0; hptr && count < index; hptr = hptr->next, count++)
		;
	return (hptr);
}
