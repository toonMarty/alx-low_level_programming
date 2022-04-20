#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 * @s: string
 * Return: Always 0 (Success)
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
 * rev_string - Entry point
 * @s: string
 * Return: nothing
*/
void rev_string(char *s)
{
int len = _strlen(s);
int i;

for (i = len; i >= 0; i--)
{
printf("%c", *(s + i));
}
putchar('\n');
}
