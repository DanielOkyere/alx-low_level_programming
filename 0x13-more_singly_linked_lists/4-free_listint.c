#include "lists.h"

/**
 * free_listint - free list
 * @head: current head of list
 */
void free_listint(listint_t *head)
{
	listint_t *curr, *nxt;

	curr = head;

	while (curr != NULL)
	{
		nxt = curr->next;
		free(curr);
		curr = nxt;
	}
}
