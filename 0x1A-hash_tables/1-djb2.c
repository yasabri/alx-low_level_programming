#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing djb2 algorithm
 * @str: string to hash
 * Return: hash calculated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int x;

	hash = 5381;
	while ((x = *str++))
		hash = ((hash << 5) + hash) + x; /* hash * 33 + c */

	return (hash);
}
