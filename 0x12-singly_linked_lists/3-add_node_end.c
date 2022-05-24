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
 * add_node_end - function that adds a new node
 * at the end of a list_t list;
 * @head: reference to head of list
 * @str: string to be added to linked list
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_item = *head;
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
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_item->next)
		last_item = last_item->next;
	last_item->next = new_node;
	return (last_item);
}
