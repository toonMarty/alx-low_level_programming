#include "lists.h"

/**
 * free_listint - Function to free a listint_t list
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
