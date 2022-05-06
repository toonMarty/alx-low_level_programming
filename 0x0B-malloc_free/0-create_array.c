#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *cPtr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	cPtr = malloc(size * sizeof(char));
	if (cPtr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		cPtr[i] = c;
	}
	return (cPtr);
}
