#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;
	current = head;
	while (current->next != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return sum + current->n;
}
