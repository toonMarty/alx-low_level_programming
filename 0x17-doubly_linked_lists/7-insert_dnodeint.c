#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: double pointer to the first node in the list
 * @idx: index of the node to insert
 * @n: value for new node
 *
 * Return: pointer to the indexed node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int k;
	dlistint_t *temp, *newNode;

	k = 0;
	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		
		if(*h)
			(*h)->prev = newNode;

		*h = newNode;
		return (*h);
	}

	temp = *h;
	while (k < idx - 1 && temp->next != NULL)
	{
		temp = temp->next;
		k++;
	}

	if (k < idx - 1)
		return (NULL);

	newNode->next = temp->next;
	newNode->prev = temp;

	if (temp->next)
		temp->next->prev = newNode;

	temp->next = newNode;

	return (*h);
}
