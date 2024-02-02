#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - function that creates hash tables
 *
 * @size: input size of the array
 * return: hash table struct
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if(new_table == NULL)
		return NULL;
	new_table->array = malloc(sizeof(hash_table_t *) * size);
	if(new_table->array == NULL)
	{
		free(new_table);
		return NULL;
	}
	new_table->size = size;
	for(i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	return new_table;
}
