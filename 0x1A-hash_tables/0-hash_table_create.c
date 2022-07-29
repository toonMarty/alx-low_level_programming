#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned int i;

	h = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!h)
		return (NULL);

	h->size = size;
	h->array = (hash_node_t **) calloc(h->size, sizeof(hash_node_t *));

	if (!h->array)
		return (NULL);

	for (i = 0; i < h->size; i++)
	{
		h->array[i] = NULL;
	}
	return (h);
}
