#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Function that prints a  name
 * @name:name to be printed
 * @f: pointer to function
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
