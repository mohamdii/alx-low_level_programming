#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	int index;
	if (new_node == NULL)
		return 0;
	if (strcmp(key, "") == 1)
		return 0;
	index = key_index((const unsigned char *)key, ht->size);
	new_node->next = ht->array[index];
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	ht->array[index] = new_node;
	return 1;
}
