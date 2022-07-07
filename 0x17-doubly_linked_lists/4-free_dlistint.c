#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: node to free
 */
void free_dlistint(dlistint_t *head)
{
	free(head);
	free(head->next);
	free(head->prev);
}
