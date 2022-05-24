#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - appends linked list to end of node
 * @head: list_t head
 * @str: char
 * Return: pointer to new element or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int n = 0;
	list_t *hptr = malloc(sizeof(list_t));

	list_t *lhptr = *head;

	if (str == NULL && hptr->str == NULL)
	{
		free(hptr);
		return (NULL);
	}
	while (str[n])
		n++;
	hptr->len = n;
	hptr->str = strdup(str);
	hptr->next = NULL;

	if (*head == NULL)
	{
		*head = hptr;
		return (hptr);
	}
	while (lhptr->next != NULL)
		lhptr = lhptr->next;

	lhptr->next = hptr;

	return (*head);
}
