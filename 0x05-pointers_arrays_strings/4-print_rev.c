#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 *
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
char *cp;
cp = s;

while (*cp++)
{
continue;
}

return (cp - s - 1);
}
/**
 * print_rev - Entry point
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
int len = _strlen(s);
int i;
for (i = len - 1; i >= 0; --i)
{
printf("%c", *(s + i));
}
putchar('\n');
}
