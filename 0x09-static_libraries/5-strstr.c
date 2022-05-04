#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: string
 * @needle: substring
 * Return: pointer to beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;

while (haystack[i])
{
while (needle[j])
{
if (haystack[i + j] != needle[j])
{
break;
}
j++;
}
if (needle[j] == '\0')
{
return (haystack + i);
}
i++;
}
return ('\0');
}
