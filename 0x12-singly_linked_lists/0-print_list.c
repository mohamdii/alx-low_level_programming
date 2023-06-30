#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	unsigned size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL) {
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
