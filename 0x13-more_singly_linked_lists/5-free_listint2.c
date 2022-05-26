#include "lists.h"
/**
 * free_listint2 - free by setting head to NULL
 * @head: head of linkedlist
 */
void free_listint2(listint_t **head)
{
	listint_t *hptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hptr = *head;
		*head = (*head)->next;
		free(hptr);
	}
}
