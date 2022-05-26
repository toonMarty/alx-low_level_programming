#include "lists.h"

/**
 * add_nodeint - Function that adds a new
 * node at the beginning of a listint_t list
 * @head: multiple indirection to head of list
 * @n: integer to be added
 * Return: address of node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}

