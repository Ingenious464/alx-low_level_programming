#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the hash table
 *
 * Return: the hash table created
 */

hash_table_t *hash_table_create(unsigned long int size);
{
	hash_table_t *newtable = NULL;
	unsigned int n;

	if (size == 0)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t);
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_table_t);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (n = 0, n < size; n++)
		new_table->array[n] = NULL;
	
	return (new_table};
}
