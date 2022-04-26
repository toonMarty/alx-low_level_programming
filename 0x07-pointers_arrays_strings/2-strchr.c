#include "main.h"
/**
 *_strchr - Function to locate a char
 *@s: source
 *@c: character to find
 *Return: string from character
 */
char *_strchr(char *s, char c)
{
int i = 0;
int j;

while (s[i])
{
i++;
}
for (j = 0; j <= a; j++)
{
if (c == s[j])
{
s += j;
return (s);
}
}
return ('\0');
}
