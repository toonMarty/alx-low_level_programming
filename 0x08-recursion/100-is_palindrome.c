#include "main.h"
/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int len;

len = get_len(s) - 1;
return (palindrome(s, --len));
}
/**
 * get_len - Function that returns length of a string
 * @s: string
 * Return: return length of a string
 */
int get_len(char *s)
{
if (*s == '\0')
return (1);
else
return (1 + get_len(++s));
}
/**
 * palindrome - recursive check of palindrome
 * @s: string
 * @l: length of a string
 * Return: 1 if a palindrome and  0 otherwise
 */
int palindrome(char *s, int l)
{
if (*s == *(s + l))
{
if (l <= 0)
return (1);
else
return (palindrome(++s, l - 2));
}
else
return (0);
}
