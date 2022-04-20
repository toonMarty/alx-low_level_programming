#include "main.h"
#include <stdio.h>
/**
 * print_rev - Entry point
 *
 * @s: string
 *
 * Return: nothing
 */
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
