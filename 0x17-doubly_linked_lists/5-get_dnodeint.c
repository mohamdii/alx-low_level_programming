#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *point;
	unsigned int count = 0;
	
	if(head == NULL)
		return NULL;
	point = head;
	for(count = 0; count < index; count++)
	{

		point = point->next;
	}
	if (index > count)
		return NULL;
	return point;
}
