#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return nothing void does not have a return value
 * @brief function prints alphabet in lower case
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
