#include "lists.h"
/**
 * dlistint_t - function that create a node
 * @head: pointers points to head
 * @n: constant value
 * Return: struct
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return NULL;
	}
	newNode->next = *head;
	newNode->prev = NULL;
	newNode->n = n;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return newNode;
}
