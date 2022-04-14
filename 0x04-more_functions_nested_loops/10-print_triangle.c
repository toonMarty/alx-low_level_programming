#include "main.h"
/**
 * print_triangle - Function that prints a triangle
 * @size: number of characters to be printed that will make up the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int i, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if ((size - i - 1) > j)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
