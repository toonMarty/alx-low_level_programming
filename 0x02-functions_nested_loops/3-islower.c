#include "main.h"
/**
 * _islower - Entry point
 *
 * c - parameter
 *
 * Return: 1 (Success) or 0 (Failure)
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
