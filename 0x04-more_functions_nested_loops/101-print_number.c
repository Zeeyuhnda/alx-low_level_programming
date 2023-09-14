#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	int m = 1;
	int is_negative = 0;  

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	while (n / (m * 10) > 0)
	{
		m *= 10;
	}

	if (is_negative)
	{
		_putchar('-');
	}

	while (m > 0)
	{
		_putchar((n / m) + '0');
		n %= m;
		m /= 10; 
	}
}

