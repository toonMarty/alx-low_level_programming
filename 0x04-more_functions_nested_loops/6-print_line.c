#include "main.h"
/**
 * print_line - Function that prints n number of lines
 * @n: number of lines to be printed
 * Return - nothing
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i = 0;
while (i <= n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
}
