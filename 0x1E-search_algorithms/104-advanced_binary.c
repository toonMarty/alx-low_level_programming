#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary_recursive - Searches recursively for
 * an array element using binary search
 * @array: a pointer to the first element of the sub array to search
 * @left: the starting index of the sub array to search
 * @right: the ending index of the sub-array to search
 * @value: the value to search for
 * Return: Value not present, -1
 *          else, index of the array
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");

	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;

	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);

	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array using
 * advanced binary search
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in the array.
 * @value: The value to search for
 * Return: If value is not present or array is NULL, -1
 *          else the first index  where the value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
