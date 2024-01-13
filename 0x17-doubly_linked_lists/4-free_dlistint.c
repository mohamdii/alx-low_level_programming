#include "lists.h"


void free_dlistint(dlistint_t *head)
{

	while(head->next != NULL)
	{
		free(head->next);
		free(head->prev);
		head = head->next;
	}
}
