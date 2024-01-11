#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - function that counts elements
 *
 * @h: is a next pointer
 * Return: size_t type counter
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	while(h != NULL)
	{
		h = h->next;
		i++;
	}
	return i;
}
