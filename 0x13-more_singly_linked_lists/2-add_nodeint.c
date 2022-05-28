#include "lists.h"
/**
 * add_nodeint - adds node to list
 * @head: head node
 * @n: integer (data)
 * Return: address of the new element or null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hptr = malloc(sizeof(listint_t));

	if (hptr == NULL)
		return (NULL);

	hptr->n = n;
	hptr->next = (*head);
	(*head) = hptr;
	return (*head);
}
