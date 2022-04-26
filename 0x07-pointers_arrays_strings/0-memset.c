#include "main.h"

/**
 *_memset - Function entry point
 *@s: memory area
 *@b: constant byte
 *@n: bytes of memory
 *Return: memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
