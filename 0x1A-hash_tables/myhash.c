#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_node = (hash_table_t *)malloc(sizeof(hash_table_t));
	int i;

	if(new_node == NULL)
		return NULL;
	new_node->array = malloc(sizeof(hash_table_t )* size);
	if(new_node->array == NULL)
	{
		free(new_node);
		return NULL;
	}
	new_node->size = size;

	for(i = 0; i < size; i++)
	{
		new_node->array[i] = NULL;
	}
	return new_node;
}

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);

	printf("%p\n", (void *)ht);
	return EXIT_SUCCESS;
}
