#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * _atoi - Function that converts string to integer
 * @s: the string
 * Return: an integer
 */
int _atoi(char *s)
{
int x = 0;
int i;
for (i = 0; s[i] != '\0'; ++i)
{
x = x * 10 + s[i] - '0';
}
return (x);
}
