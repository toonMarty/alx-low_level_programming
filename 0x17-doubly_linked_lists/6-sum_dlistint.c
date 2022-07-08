#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: pointer to head of list
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current;
register int sum = 0;

if (!head)
{
return (0);
}
current = head;
while (current)
{
sum += current->n;
current = current->next;
}
return (sum);
}
