#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

if (dest == NULL)
{
return NULL;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return ptr;
}
