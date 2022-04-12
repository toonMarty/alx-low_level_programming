#include "main.h"
/**
 * print_sign - Entry point
 * @n: an integer that will be positive, negative,or 0
 * Return: Always 1 (Success) 0 (Zero) -1 (Failure)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
