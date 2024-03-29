#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *
 * @key: key to get the index
 *
 * @size: size of the hash table
 *
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;
	return (index);
}
