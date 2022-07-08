#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index
* of a linked list.
* @head: head of a list.
* @index: index of the list where the node is
* deleted.
*
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *prev;
dlistint_t *next;

prev = *head;

if (index != 0)
{
for (i = 0; i < index - 1 && prev != NULL; i++)
{
prev = prev->next;
}
}

if (prev == NULL || (prev->next == NULL && index != 0))
{
return (-1);
}

next = prev->next;

if (index != 0)
{
prev->next = next->next;
free(next);
}
else
{
free(prev);
*head = next;
}

return (1);
}
