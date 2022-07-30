#include "lists.h"
#include <stdlib.h>
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
	dlistint_t *temp2;

	dlistint_t *temp = *head;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);

		return (1);
	}
	while (k < index && temp->next != NULL)
	{
		temp = temp->next;
		k++;
	}
	if (k < index - 1)
		return (-1);
	temp2 = temp->prev;
	temp2->next = temp->next;

	if (temp->next)
		temp->next->prev = temp2;
	free(temp);
	return (1);
}
