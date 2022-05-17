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

if (separator == NULL)
{
return;
}
va_start(va, n);

for (counter  = 0; counter < n; counter++)
{
printf("%d", va_arg(va, int));

if (separator && counter != n - 1)
{
printf("%s", separator);
}
else
{
"";
}
}

va_end(va);
printf("\n");
}

