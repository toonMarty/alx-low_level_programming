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
int i = 0;
while ((*s1 != '\0') || (*s2 != '\0'))
{
if (*s1 > *s2)
return (1);
if (*s1 < *s2)
return (-1);
s1++;
s2++;
}
return (0);
}
