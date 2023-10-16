i#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return
 */
void print_rev(char *s)
{
	int x = 0;

	while (x >= 0)
	{
		if (s[x] == '\0')
			break;
		x++;
	}

	for (x--; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
