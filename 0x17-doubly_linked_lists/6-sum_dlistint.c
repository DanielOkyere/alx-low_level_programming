#include "lists.h"

/**
 * sum_dlistint - sum of all data in list
 *
 * @head: head node
 * Return: sum of data in node or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		head = head->next;
		sum += head->n;
	}

	return (sum);
}
