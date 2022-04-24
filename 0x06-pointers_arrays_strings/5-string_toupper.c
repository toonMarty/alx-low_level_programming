#include "main.h"
/**
 * string_toupper - Entry point
 * @s: string
 * Return: nothing
 */
void *string_toupper(char *s)
{
for (; *s; s++)
if (('a' <= *s) && (*s <= 'z'))
*s = 'A' + (*s - 'a');
}

