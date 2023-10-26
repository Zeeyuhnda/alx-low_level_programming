#include "main.h"

/**
 * set_bit - sets value of bit to at given index
 * @n: decimal num passed by pointer
 * @index: index position to change, starts @0
 * Return: 1 if successful, -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n +=p;

	return (1);
}
