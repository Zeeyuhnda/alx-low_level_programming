#include "function_pointers.h"

/**
 * array_iterator - execute funtion pointer of an array
 * @array: array of int
 * @size: size of array
 * @action: funtion pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
