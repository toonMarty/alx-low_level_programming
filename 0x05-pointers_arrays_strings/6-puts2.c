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
 *
 * Return: nothing
 */
void puts2(char *str)
{
int len = _strlen(str);

for (int i = 0; i < len / 2; i++)
{
printf("%c", *(str + i));
}
putchar('\n');
}
