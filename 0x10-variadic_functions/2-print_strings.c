#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string separator
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
register unsigned int i;
va_list va;
char *s;

va_start(va, n);
for (i = 0; i < n; i++)
{
s = va_arg(va, char *);
if (!s)
s = "(nil)";
if (!separator)
printf("%s", s);
else if (separator && !i)
printf("%s", s);
else
printf("%s%s", separator, s);
}
printf("\n");
va_end(va);
}

