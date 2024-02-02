#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
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
	hash_node_t *p;

	if (ht == NULL || key == NULL)
		return NULL;
	index = key_index((const unsigned char *)key, ht->size);
	p = ht->array[index];
	for(;p != NULL; p = p->next)
	{
		if (strcmp(p->key, key) == 0)
			return p->value;
	}
	return NULL;
}
