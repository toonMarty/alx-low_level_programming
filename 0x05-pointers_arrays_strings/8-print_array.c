#include "main.h";
#include <stdio.h>
/**
 * print_array - Function that prints the contents of an array
 *
 * @a: The array
 *
 * @n: the number of elements in the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i <= 4 && i != 0)
{
printf(", ");
}
printf("%d", *(a + i));
}
}
