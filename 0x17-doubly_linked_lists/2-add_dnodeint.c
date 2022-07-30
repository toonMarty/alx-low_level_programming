#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: address of node added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head)
		(*head)->prev = newNode;
	*head = newNode;
	return (*head);
}
