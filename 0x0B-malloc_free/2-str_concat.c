#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concats two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1), len2 = strlen(s2);
	char *concat = malloc((sizeof(char) * (len1 + len2 + 1)));

	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}
	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, len2 + 1);
	return (concat);

	free(concat);
}
