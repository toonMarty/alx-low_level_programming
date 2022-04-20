#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 * @s: the string for which to determine the length
 * Return: len
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
 * puts2 - Entry point
 * @str: the string from which to print
 * Return: nothing
 */
void puts2(char *str)
{
int len = _strlen(str);
int i;

for (i = 0; i < len; i++)
{
if (i % 2 == 0)
{
printf("%c", *(str + i));
}
}
putchar('\n');
}
