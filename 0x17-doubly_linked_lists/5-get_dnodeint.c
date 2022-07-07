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
	dlistint_t *hptr = head;
	unsigned int count = 0;

	if (head == NULL || hptr == NULL)
		return (NULL);
	while (hptr->next != NULL)
	{
		if (count == index)
			return (hptr);

		count++;
		hptr = hptr->next;
	}
	return (NULL);
}
