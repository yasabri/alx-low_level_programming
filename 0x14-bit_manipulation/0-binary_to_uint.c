#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: string containing the binary number
 * Return: can be 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, y = 0;

	if (b == NULL)
		return (0);
	while (b[x])
	{
		if (!(b[x] == '0' || b[x] == '1'))
			return (0);
		y <<= 1;
		if (b[x] == '1')
			y += 1;
		x++;
	}
	return (y);
}
