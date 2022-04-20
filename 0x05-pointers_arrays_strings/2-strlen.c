#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 *
 * @s: character(s) for which the length will be found
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
char *cptr;
cptr = s;
while (*cptr++)
{
continue;
}
return cptr - s - 1;
}
