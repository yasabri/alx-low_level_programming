#include "hash_tables.h"

/**
 * key_index - Get index at which key or value
 *      pair need to be stored in array of a hash table.
 * @size: size of array of hash table
 * @key: The key to get the index of
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
