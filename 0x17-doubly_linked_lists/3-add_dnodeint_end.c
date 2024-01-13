#include "lists.h"
/**
 * 
 *
 * 
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *lastNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if(newNode == NULL)
	{
		return NULL;
	}
	newNode->n = n;
	newNode->next = NULL;

	if(*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return newNode;
	}
	lastNode = *head;
	while(lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = newNode;
	newNode->prev = lastNode;
	
	return newNode;
}
