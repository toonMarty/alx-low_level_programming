#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Function that copies a string
 * @dest: String to copy to
 * @src: String to copy from
 * Return: NULL if destination is null otherwise return ptr to dest, copy of src
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

if (dest == NULL)
{
return (NULL);
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (ptr);
}
