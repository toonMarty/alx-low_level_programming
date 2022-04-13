#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * @c: third integer
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;

if ((a != b && a!=c) || (b != c && b != a) || (c != a && c != b))
{
if ((a > b) && (a > c))
{
largest = a;
}
else if ((b > a) && (b > c))
{    
largest = b;
}
else
{
largest = c;
}
}
else
{
return -1;
}
return (largest);
}
