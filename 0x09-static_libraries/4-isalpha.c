#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: an integer matching an ASCII character
 * Return: 1 (Success) or 0 (Failure)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
