#include "main.h"
/**
 * _islower - Entry point
 *
 * param int
 *
 * Return: 1 (Success)
 *
 * Return: 0 (Failure)
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
