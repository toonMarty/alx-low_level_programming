#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	while (b <= 'Z')
	{
		if (a <= 'z')
		{
			putchar(a);
			a++;
		}
		else
		{
			putchar(b);
			b++;
		}
	}
	putchar('\n');

	return (0);
}
