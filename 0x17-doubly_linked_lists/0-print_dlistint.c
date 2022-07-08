#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - prints elements of a
 * doubly linked list
 * @h: head of dl_list
 * Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;

for (; h != NULL; h = h->next)
{
printf("%d\n", h->n);
count++;
}
return (count);
}
