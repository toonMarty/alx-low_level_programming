#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a list
 * @head: head of the list
 * @n: element to add at the end
 * Return: address of inserted element(Success) or
 * NULL (Fail)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *current;
dlistint_t *i = *head;

if (!n)
{
return (NULL);
}
current = malloc(sizeof(*current));

current->n = n;
current->next = NULL;
current->prev = NULL;

if (*head == NULL)
{
*head = current;
return (NULL);
}

while (i->next != NULL)
{
i = i->next;
}

i->next = current;
current->prev = i;

return (current);
}
