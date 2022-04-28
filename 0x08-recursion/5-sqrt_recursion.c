#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: if no natural square root, return -1 else square root
 */
int _sqrt_recursion(int n)
{
return (findsqrt(n, 1));
}

/**
 * findsqrt - function to find sqrt_recursion
 * @n: number to determine if squarerrot
 * @p: Incrementer to compare against n
 * Return: square root if natural or -1 i none found
 */
int findsqrt(int n, int p)
{
int square;

square = p * p;
if (square == n)
return (p);
else if (square < n)
return (findsqrt(n, p + 1));
else
return (-1);
}
