#include "main.h"
#include <stdio.h>
/**
 * print_rev - Entry point
 *
 * @s: string
 *
 * Return: nothing
 */
int _strlen(char *s)
{
char *cp;
cp = s;
while(*cp++)
{
continue;
}

return (cp-s-1);
}
void print_rev(char *s)
{
int len = _strlen(s);
int i;

for (i = len; i >= 0; i--)
{
printf("%c", *(s+i));
}
_putchar('\n');
}
