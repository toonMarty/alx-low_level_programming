#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds elements to a list
 * @head: head of the list
 * @n: element to add to list
 * Return: address of element
 * else return NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *current;

current = malloc(sizeof(*current));

if (!head || !current)
{
return (NULL);
}

current->next = NULL;
current->prev = NULL;
current->n = n;

if (*head == NULL)
{
*head = current;
return (NULL);
}

current->next = *head;
(*head)->prev = current;
*head = current;

return (*head);
}
