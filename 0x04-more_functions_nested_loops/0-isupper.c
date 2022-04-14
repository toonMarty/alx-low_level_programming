#include "main.h"
/**
 * _isupper - Entry point
 *
 * @c: an integer which corresponds to an ASCII character which is an uppercase letter
 *
 * Return: 1 when upper and 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
