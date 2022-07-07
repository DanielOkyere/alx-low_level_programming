#include "lists.h"

/**
 * add_dnodeint_end - appends a node to a list
 *
 * @head: head node to be attachec
 * @n: data
 * Return: dlistint_t* address to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	dlistint_t *last_node;

	if (head == NULL || new_node == NULL)
		return (NULL);
	last_node = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (&(*new_node));
	}
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	new_node->prev = last_node;

	return (&(*new_node));
}
