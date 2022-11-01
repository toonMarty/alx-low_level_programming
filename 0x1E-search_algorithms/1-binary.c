#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * binary_search - a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: The value to search, T
 * Return: index where value is located (Success) -1 if array is NULL
 * or value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t idx;

	if (array != NULL)
	{
		while (left <= right)
		{
			printf("Searching in array: ");

			for (idx = left; idx < right; idx++)
				printf("%d, ", array[idx]);
			printf("%d\n", array[idx]);

			mid = left + (right - left) / 2;

			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
		}
	}
	return (-1);
}
