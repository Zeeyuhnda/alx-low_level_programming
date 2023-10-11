#include "function_pointers.h"

/**
 * print_name - Print name from function pointer
 * @name: char str
 * @f: funtion pointer, takes str arg
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
