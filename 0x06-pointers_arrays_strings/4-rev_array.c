#include "main.h"
/**
 * swap - Entry point
 * @a: first element
 * @b: second element
 * Return: nothing
 */
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
/**
 * reverse_array - Reverses array
 * @a: the array
 * @n: length
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int *pointer1 = a;
int *pointer2 = a + n - 1;

while (pointer1 < pointer2)
{
swap(pointer1, pointer2);
pointer1++;
pointer2--;
}
}
