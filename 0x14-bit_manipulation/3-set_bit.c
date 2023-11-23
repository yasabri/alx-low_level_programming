#include "main.h"
#include <stdlib.h>

/**
 * set_bit - gets bit on index `index`
 * @n: decimal number
 * @index: the index
 * Return:can be -1 , 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
