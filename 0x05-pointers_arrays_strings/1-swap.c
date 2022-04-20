#include "main.h"
/**
 * swap_int - Function that swaps two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp = 0;
temp = *a;
*a = *b;
*b = temp;
}
