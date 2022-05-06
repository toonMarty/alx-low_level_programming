#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
char *cPtr;
unsigned int i;

cPtr = malloc(size * sizeof(char));

for (i = 0; i < size; i++)
{
cPtr[i] = c;
}

if (size == 0)
{
return (NULL);
}

if (cPtr == NULL)
{
printf("Failed to allocate memory\n");
}
return (cPtr);

free(cPtr);
}
