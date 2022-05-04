#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: source
 * @accept: allowed string
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;

while (s[i])
{
j = 0;

while (accept[j])
{
if (s[i] == accept[j])
{
s += i;
return (s);
}
j++;
}
i++;
}
return ('\0');
}
