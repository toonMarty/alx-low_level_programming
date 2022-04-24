#include "main.h"
#include <string.h>
/**
 * _strcmp - Function that compares strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0 if equal -1 and 1 if < or >
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] && s2[i]; ++i)
{
if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i])
continue;
else
break;
}
if (s1[i] == s2[i])
return (0);

if ((s1[i] | 32) < (s2[i] | 32))
return (-1);
return (1);
}
