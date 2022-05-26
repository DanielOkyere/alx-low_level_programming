#include "lists.h"

/**
 * sum_listint - sums all linkedlist data
 * @head: linked list head
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
