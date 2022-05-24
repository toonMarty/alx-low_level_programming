#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list
 * @head: reference to head of linked list
 * using multiple indirection
 * @str: string to be added on new node
 * Return: address of new head;
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	if (!str)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_str = strdup(str);
	if (!new_str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_str);
	new_node->str = new_str;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
