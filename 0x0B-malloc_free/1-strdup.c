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
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
