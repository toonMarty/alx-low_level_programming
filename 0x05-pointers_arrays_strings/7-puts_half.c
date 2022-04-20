#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 * @s: string to find length
 * Return: length
 */
int _strlen(char *s)
{
char *cp;
cp = s;

while(*cp++)
{
continue;
}
return (cp - s - 1);
}
/**
 * puts_half - Entry point
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
int len = _strlen(str);
int i;
for (i = len / 2; i < len; i++)
{
printf("%c", *(str + i));
}
putchar('\n');
}

