#include "main.h"
/**
 * is_prime_number - determine if number is prime
 * @n: number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);
if (n < 4)
return (1);
return (prime(n, 2));
}
/**
 * _sqrt - returns sqrt of number
 * @n: number
 * @i: divisor
 * Return: square root of x
 */

int _sqrt(int n, int i)
{
int square;

square = i * i;
if (square >= n)
return (i);
else
return (_sqrt(n, i + 1));
}

/**
 * _prime - helper fuction to find prime
 * @n: number
 * @j: incrementor divisor
 * Return: 0 if not prime, 1 if prime
 */
int _prime(int n, int j)
{
if (n % j == 0)
{
return (0);
}
else if (prime(n, 1) < j)
{
return (1);
}
else
{
return (prime(n, j + 1));
}
}
