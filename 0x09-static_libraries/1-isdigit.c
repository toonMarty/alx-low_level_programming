#include "main.h"
/**
 * _isdigit - Functions that checks whether an ASCII character is a digit
 *
 * @c: an integer that corresponds to an ASCII value
 *
 * Return: 1 (Success) if a digit and 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
