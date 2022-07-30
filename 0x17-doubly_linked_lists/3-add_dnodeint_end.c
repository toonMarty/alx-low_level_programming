#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: address of node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *newNode = (dlistint_t *)(malloc(sizeof(dlistint_t)));

	if (!newNode)
		return (NULL);
	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (current->next != NULL)
		current = current->next;

	newNode->prev = current;
	current->next = newNode;

	return (*head);
}
