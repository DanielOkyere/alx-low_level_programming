#include "hash_tables.h"

/**
 * shash_table_create - create order table
 *
 * @size: size of the ordered table
 * Return: shash_table_t* head to hashtable
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	if (size == 0)
		return (NULL);
	ht = calloc(1, sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc((size_t)ht->size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (check_key_s(ht->array[index], key))
		return (replace_value_s(&ht->array[index], key, value));
	new = add_node_s(&ht->array[index], key, value);
	if(!new)
		return (0);

	insert_sort(new, ht);

	return (1);
}

int check_key_s(shash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}

	return (0);
}

int replace_value_s(shash_node_t **ht, const char *key, const char *value)
{
	shash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
	if (!temp->value)
		return (0);
	return (1);
}

shash_node_t *add_node_s(shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *new;

	new = calloc(1, sizeof(shash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (NULL);
	}
	if (*head == NULL)
		(*head) = new;
	else
	{
		new->next = (*head);
		(*head) = new;
	}

	return (*head);
}

void insert_sort(shash_node_t *node, shash_table_t *ht)
{
	shash_node_t *head = ht->shead;

	if (!head || strcmp(node->key, head->key) < 0)
	{
		ht->shead = node;
		if (!head)
			ht->stail = node;
		else
		{
			node->snext = head;
			head->sprev = node;
		}
		return;
	}
	while (head->snext && strcmp(node->key, head->next->key) >= 0)
		head = head->snext;

	node->sprev = head;
	if (!head->snext)
		ht->stail = node;
	else
		head->snext->sprev = node;
	node->snext = head->next;
	head->snext = node;
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head = NULL;

	if (!ht)
		return;

	head = ht->shead;

	printf("{");
	while (head)
	{
		printf("'%s': '%s'", head->key, head->value);
		if (head->snext)
			printf(", ");
		head = head->snext;
	}

	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail = NULL;

	if (!ht)
		return;

	tail = ht->stail;

	printf("{");
	while (tail)
	{
		printf("'%s': '%s'", tail->key, tail->value);
		if (tail->sprev)
			printf(", ");
		tail = tail->sprev;
	}

	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	if (!ht)
		return;

	free_list_s(ht->shead);
	free(ht->array);
	free(ht);
}

void free_list_s(shash_node_t *head)
{
	shash_node_t *temp;

	while (head)
	{
		temp = head->snext;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}
