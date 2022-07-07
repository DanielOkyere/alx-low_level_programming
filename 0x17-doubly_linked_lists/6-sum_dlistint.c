#include "lists.h"

/**
 * sum_dlistint - sum of all data in list
 *
 * @head: head node
 * Return: sum of data in node or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *hptr;
	int sum;

	hptr = head;
	for (sum = 0; hptr; hptr = hptr->next)
		sum += hptr->n;

	return (sum);
}
