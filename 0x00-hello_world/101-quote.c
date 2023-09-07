#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	const char *message =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int s = strlen(message);

	write(2, message, s);
	return (1);
}

