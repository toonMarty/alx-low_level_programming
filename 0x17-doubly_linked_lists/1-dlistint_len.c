#include "lists.h"

/**
 * dlistint_len - counts the length of a list
 * @h: head of list
 * Return: total number of elements
 * in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

for (; h != NULL; h = h->next)
{
count++;
}
return (count);
}
