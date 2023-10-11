#include "function_pointers.h"

/**
 * array_iterator - execute funtion pointer of an array
 * @array: array of int
 * @size: size of array
 * @action: funtion pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
