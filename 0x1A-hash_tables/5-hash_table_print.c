#include "hash_tables.h"
#include <stdio.h>
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *p;
	long unsigned int i;
	printf("{");
	for(i = 0; ht->size > i;i++)
	{
		p = ht->array[i];
		while(p != NULL)
		{
			if (i != 0)
			{
				printf(",");
			}
			printf("\'%s\':\'%s\'",p->key, p->value);
			p = p->next;
		}
	}
	printf("}\n");
}
