#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
char *cp;
cp = s;

while (*cp++)
{
continue;
}
return (cp - s - 1);
}
/**
 * rev_string - Entry point
 * @s: string
 * Return: nothing
*/
void rev_string(char *s)
{
int l, i;
char *begin_ptr, *end_ptr, ch;

l = _strlen(s);

begin_ptr = s;
end_ptr = s;

for (i = 0; i < l - 1; i++)
{
end_ptr++;
}

for (i = 0; i < l / 2; i++) 
{
ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;

begin_ptr++;
end_ptr--;
}
}
