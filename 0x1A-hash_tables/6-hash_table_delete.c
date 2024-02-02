#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *p;
	unsigned long int i;	
	for(i = 0; i < ht->size;i++)
	{
		p = ht->array[i];
		while(p != NULL)
		{
			free(p->value);
			free(p->key);
			p = p->next;
		}
		i++;
	}
}
