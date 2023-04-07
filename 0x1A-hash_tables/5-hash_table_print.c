#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: the hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node = NULL;
	char *dv = "";

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				printf("%s'%s': '%s'", dv, node->key, node->value);
				node = node->next;
				dv = " , ";
			}
		}
		printf("}\n");
	}
}
