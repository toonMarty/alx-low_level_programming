#include "main.h"
#include <stdio.h>
int _strlen(char *s)
{
char *cp;
cp = s;

while(*cp++)
{
continue;
}
return (cp - s - 1);
}

void puts_half(char *str)
{
int len = _strlen(str);

for (int i = len / 2; i < len; i++)
{
printf("%c", *(str + i));
}
putchar('\n');
}

