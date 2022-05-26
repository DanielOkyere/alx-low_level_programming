#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: linked list
 * @idx: index
 * @n: value to put in linked list
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp1, *temp2;

	if (head == NULL)
		return (NULL);

	temp1 = *head;
	for (count = 1; temp1 && count < idx; count++)
	{
		temp1 = temp1->next;
		if (temp1 == NULL)
			return (NULL);
	}

	temp2 = malloc(sizeof(listint_t));
	if (temp2 == NULL)
	{
		free(temp2);
		return (NULL);
	}
	temp2->n = n;

	if (idx == 0)
	{
		*head = temp2;
		temp2->next = temp1;
	}
	else if (temp1->next)
	{
		temp2->next = temp1->next;
		temp1->next = temp2;
	}
	else
	{
		temp2->next = NULL;
		temp1->next = temp2;
	}
	return (temp2);
}
