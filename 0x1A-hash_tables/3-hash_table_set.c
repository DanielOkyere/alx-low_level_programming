#include "hash_tables.h"

/**
 * _strdup - custom strdup
 *
 * @str: string to be duplicated
 * Return: char*
 */
char *_strdup(const char *str)
{
	char *p;

	p = (char *)malloc(strlen(str) + 1);
	if (p != NULL)
		strcpy(p, str);

	return (p);
}

/**
 * hash_table_set - sets value for hashtable
 *
 * @ht: hash table pointer
 * @key: key to the hash table
 * @value: value to insert into hash table
 * Return: int 1 if successful or 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index, size;
	hash_node_t *new_node;

	if (!ht || !key || !value)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = _strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = _strdup(key);
	new_node->value = _strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
