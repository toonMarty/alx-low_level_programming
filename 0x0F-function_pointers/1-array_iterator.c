#include "function_pointers.h"
/**
 * array_iterator -Function that iterates an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to functions
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	register int index; /*iterator counter*/

	for (index = 0; index < size; index++)
	{
		if (array == NULL || action == NULL)
			return;
		action(array[index]);
	}
}
