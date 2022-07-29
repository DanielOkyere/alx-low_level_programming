#include "hash_tables.h"

/**
 * hash_table_print - prints the nodes of a hashtable
 *
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int c;

	if (ht == NULL)
		return;
	c = 1;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node != NULL)
			{
				c == 0 ? printf(", ") : c;
				printf("'%s': '%s'",
					node->key,
					node->value);
				c = 0;
				node = node->next;
			}

		}
	}
	printf("}\n");
}
