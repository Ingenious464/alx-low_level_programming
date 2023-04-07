#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: the hash table to be deleted
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tntd, *tnad;
	/*tntd = the node to delete, tnad = the node after delete*/
	unsigned int n;

	if (ht != NULL)
	{
		for (n = 0; n < ht->size; n++)
		{
			tntd = ht->array[n];
			while (tntd != NULL)
			{
				tnad = tntd;
				free(tntd->key);
				free(tntd->value);
				free(tntd);
				tntd = tnad;
			}
		}
		free(ht->array);
		free(ht);
	}
}
