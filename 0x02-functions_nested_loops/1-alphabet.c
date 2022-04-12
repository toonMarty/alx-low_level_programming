#include "main.h"
/**
 * print_alphabet function name
 *
 * Return nothing void does not have a return value
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
