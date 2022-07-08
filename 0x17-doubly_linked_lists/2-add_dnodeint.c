#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: address of node added
 */
listint_t *add_dnodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
