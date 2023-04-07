#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the hash table
 *
 * Return: the hash table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable = NULL;
	unsigned int n;

	if (size == 0)
		return (NULL);
	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);
	newtable->size = size;
	newtable->array = malloc(sizeof(hash_table_t));
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	for (n = 0; n < size; n++)
		newtable->array[n] = NULL;
	
	return (newtable);
}
