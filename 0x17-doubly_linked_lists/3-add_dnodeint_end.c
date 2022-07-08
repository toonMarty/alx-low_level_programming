#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list_t list;
 * @head: reference to head of list
 * @n: int to be added to linked list
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *last = *head;
	int new_n;

	if (!n)
		return (NULL);
	new_n = n;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	if (!n)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = new_n;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (last->next)
		last = last->next;
	last->next = newNode;
	return (last);
}
