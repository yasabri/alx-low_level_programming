#include "main.h"

/**
 * flip_bits - quantity of bits you would
 * have to flip in order to change a number.
 * @n: first number.
 * @m: second number.
 * Return: thebits number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int thebits;

	for (thebits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			thebits++;
	}

	return (thebits);
}
