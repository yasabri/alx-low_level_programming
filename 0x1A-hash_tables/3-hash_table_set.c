#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 *
 * @key: is essential. Key cannot consist of a blank string
 * Return: If 1 successful, if 0 unsuccessful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *node;
hash_node_t *new_node;
unsigned long int index;

if (ht == NULL || *key == '\n' || *value == '\n')
	return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

if (node == NULL)
{
	new_node = create_new_node(key, value);
	if (new_node == NULL)
		return (0);

	ht->array[index] = new_node;
	return (1);
}

while (node != NULL)
{
	if (strcmp(key, node->key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}
	node = node->next;
}
new_node = create_new_node(key, value);
if (new_node == NULL)
	return (0);

new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}

/**
 * create_new_node - create a new node
 * @value: value that corresponds to the key.
 * 	Value must be reiterated. value might be an empty string.
 * @key: is essential. Key cannot consist of a blank string.
 * Return:  If 1 successful, if 0 unsuccessful
 */

hash_node_t *create_new_node (const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
