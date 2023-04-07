#include "hash_tables.h"

/**
 * hash_table_set - adds/update an element to the hash table
 *
 * @ht: the hash table
 *
 * @key: the key
 *
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *sh_e, *new_node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	sh_e = ht->array[index];
	while (sh_e != NULL)
	{
		if (strcmp(sh_e->key, key) == 0)
		{
			free(sh_e->value);
			sh_e->value = strdup(value);
			return (1);
		}
		sh_e =sh_e->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);

return (1);
}
