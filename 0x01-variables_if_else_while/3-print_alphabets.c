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

	while (a <= 'z')
	{
		if (b <= 'Z')
		{
			putchar(b);
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
