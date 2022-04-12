#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: a number for which we find the last digit
 *
 * Return: n % 10 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-n % 10);
	}
	else
	{
		return (n % 10);
	}
}
