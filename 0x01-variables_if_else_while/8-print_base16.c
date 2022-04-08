#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int b = '0';

	while (a <= 'f')
	{
		if (b <= 9)
		{
			putchar(b + '0');
			b++;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');

	return (0);
}
