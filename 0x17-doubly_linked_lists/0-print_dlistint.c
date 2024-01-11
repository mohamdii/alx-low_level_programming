#include <stdio.h>
#include <stdlib.h>
#include  "lists.h"
/**
 * print_dlistint - function that prints what is inside and counts
 * 
 * @h: a pointer that points to next
 * Return: size_t type
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;
	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return i;
}
