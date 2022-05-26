#include "lists.h"
/**
 * get_nodeint_at_index - gets nth node
 * @head: linked list
 * @index: unsigned int index
 * Return: Null on fail or data at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *hptr;

	hptr = head;
	if (hptr == NULL)
		return (NULL);

	while (hptr != NULL)
	{
		if (count == index)
			return (hptr);
		count++;
		hptr = hptr->next;
	}

	return (NULL);
}
