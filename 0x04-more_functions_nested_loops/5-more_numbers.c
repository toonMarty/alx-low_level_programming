#include "main.h"
/**
 * more_numbers - Function that displays numbers1-14 in 10 rows
 * Return - nothing
 */
void more_numbers(void)
{
int b = 0;

while (b < 10)
{
int a = 0;
while (a <= 14)
{
if (a % 10 != a)
{
_putchar(a / 10 + '0');
}
_putchar(a % 10 + '0');
a++;
}
putchar('\n');
b++;
}
}
