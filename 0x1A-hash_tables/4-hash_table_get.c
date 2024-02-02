#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index]->value == NULL || ht->array[index]->key == NULL)
		return NULL;
	return ht->array[index]->value;
}

