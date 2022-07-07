#include "lists.h"

/**
 * add_dnodeint - adds a node to list
 *
 * @head: head node
 * @n: new data
 * Return: dlistint_t* address to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (&(*new_node));
}
