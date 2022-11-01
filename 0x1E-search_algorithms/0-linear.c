#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - A function that searches for
 * an array element using the linear search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched, T
 * Return: first index where value is located or -1 if
 * value is not located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				return (i);
			}
			else
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			}
		}
	}
	return (-1);
}
