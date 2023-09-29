#include "main.h"
#include <stdio.h>
/**
 * main - orints name of file followed by new line
 * @argc: argument count
 * @argv: arguments passed to main, array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
