#include "main.h"
/**
 * findsqrt - function to apply to sqrt_recursion
 * @n: number to determine if squarerrot
 * @i: counter to compare against n
 * Return: square root if natural or -1 i none found
 */
int findsqrt(int n, int i)
{
int square;

square = i * i;
if (square == n)
return (i);
else if (square < n)
return (findsqrt(c, i + 1));
else
return (-1);
}
