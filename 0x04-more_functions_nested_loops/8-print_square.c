#include "main.h"
/**
 * print_square - Function that prints n squares
 * @n: number of squares to be printed
 * Return - nothing
 */
void print_square(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i = 0;
while (i < n)
{
int j = 0;
while (j < n)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
}
