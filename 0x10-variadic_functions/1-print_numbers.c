#include "variadic_functions.h"
/**
 * print_numbers - Function that prints numbers
 * @separator: a string that acts as a separator
 * @n: number of values to print
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int counter;
va_list va;

va_start(va, n);

for (counter  = 0; counter < n; counter++)
{
printf("%d%s", va_arg(va, int),
		(separator && counter != n - 1) ? separator : "");
}

va_end(va);
printf("\n");
}

