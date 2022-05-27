#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: array.
 * @key: key value.
 * @value: value.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));

	if (node == 0)
		return (0);
	ht->array[index] = node;

	node->key = malloc(sizeof(char) * strlen(key));
	if (node->key == NULL)
	{
		free(node->key);
		return (0);
	}

	node->value = malloc(sizeof(char) * strlen(value));
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->key = strcpy(node->key, key);
	node->key = strcpy(node->value, value);

	node->next = NULL;
	return (1);
}
