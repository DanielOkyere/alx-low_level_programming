#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: node to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		hptr = head;
		head = hptr->next;
		free(hptr);
	}
}
