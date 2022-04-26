#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 *@s: source string
 *@accept: allowed string
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j;
unsigned int k = 0;

while (accept[i])
{
j = 0;

while (s[j] != 32)
{
if (accept[i] == s[j])
{
k++;
}
j++;
}
i++;
}
return (k);
}
