#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 0;
	char c;

	while (i < 1)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
