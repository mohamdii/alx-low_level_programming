#include "hash_tables.h"
/**
 * key_index - function that finds the key
 *
 * @key: the key
 * @size: size of array
 * return: int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	unsigned long int index = hash % size;

	return index;
}
