#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add new node at the beggining of a list
 * @head: pointer to pointer
 * @str: string to add
 * Return: address of new element or NUll if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *hptr;
	unsigned int c = 0;

	while (str[c])
		c++;

	hptr = malloc(sizeof(list_t));

	if (!hptr)
		return (NULL);

	hptr->str = strdup(str);
	hptr->len = c;
	hptr->next = (*head);
	(*head) = hptr;
	return (*head);
}
