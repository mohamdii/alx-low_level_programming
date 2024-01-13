#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *point;
	unsigned int count = 0;
	
	if(head == NULL)
		return NULL;
	point = head;
	if(point == NULL)
		return NULL;
	while(point->next != NULL)
	{
		if (count == index)
			break;
		point = point->next;
		count++;
	}
	
	return point;
}
