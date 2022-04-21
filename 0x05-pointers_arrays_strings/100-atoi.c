#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * _atoi - Function that converts string to integer
 * @s: the string 
 * Return: an integer
 */
int _atoi(char *s)
{
char c;
int a;
unsigned char sign;

skipws:
c = *s;
if (c == ' ' || c == '\t')
{
s++;
goto skipws;
}
a = 0;
sign = 0;
if (c == '-')
{
sign++;
s++;
}
else if (c == '+')
s++;
conv:
c = *s;
if (isdigit(c))
{
a = a * 10 + (c - '0');
s++;
goto conv;
}
if (sign)
return (-a);
return (a);
}
