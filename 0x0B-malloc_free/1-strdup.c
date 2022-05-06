#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Function that duplicates a string
 * @str: the string to be duplicated
 * Return: duplicate
 */

char *_strdup(char *str)
{
	char *newstring;

	newstring = malloc(sizeof(str));

	if (str == NULL)
	{
		return (NULL);
	}

	if (newstring)
	{
		strcpy(newstring, str);
	}

	return (newstring);
	free(newstring);
	free(str);
}
