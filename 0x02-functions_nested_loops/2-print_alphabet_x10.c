#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
