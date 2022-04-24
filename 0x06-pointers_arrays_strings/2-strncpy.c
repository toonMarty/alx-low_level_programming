#include "main.h"
#include <stddef.h>
/**
 * _strncpy - Copies a string
 * @dest: destination string
 * @src: source string
 * @n: number
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;

if ((dest == NULL) && (src == NULL))
{
return (NULL);
}

while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (ptr);
}
