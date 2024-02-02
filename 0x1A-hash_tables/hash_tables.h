#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of a hash table
 * @value: corresponding value to key
 * The key is unique in the HashTable
 *@key: key, string
 * @next: pointer to next node of List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * hash_table_s - Hash table data structure
 * @array: array of size @size
 * @size: size of the array
 * evry cell means that  array is pointer the first node of linked list,
 * because chaining collision management is
 * what we want to employ for our HashTable.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
hash_node_t *create_new_node(const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
void free_hash_list(hash_node_t *head);

#endif
