#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate mem with malloc
 * Description: If malloc fails, end with status 98
 * @b: unsigned int mem size to allocate
 * Return: void pointer to malloc mem space
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
