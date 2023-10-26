#include "main.h"
#include <stdio.h>

/**
 * get_bit - get the value of bit at given index
 * @n: num to evaluate
 * @index: index starting @0 of specified bit
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
