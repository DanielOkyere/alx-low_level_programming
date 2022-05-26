#include "lists.h"

/**
 * pop_listint - pops list
 * @head: current linked list
 * Return: 0 if empty or n if head node deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *hptr;
	int n;

	if (*head == NULL)
		return (0);
	hptr = *head;
	n = hptr->n;

	if (hptr != NULL)
	{
		*head = hptr->next;
		free(hptr);
		return (n);
	}
	return (0);
}
