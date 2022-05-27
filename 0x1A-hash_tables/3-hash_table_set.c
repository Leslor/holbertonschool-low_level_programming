#include "hash_tables.h"

/**
  * ad_no_nd - function that adds a new node
  * at the beginning of a list_t list
  * @head: head of the linked list
  * @key: needs to be duplicated
  * @value: needs to be duplicated
  * Return: the address of the new element, or NULL if it failed
  */

hash_node_t *ad_no_nd(hash_node_t **head, const char *key, const char *value)
{
	/* creating the last nodo */
	hash_node_t *last_node = malloc(sizeof(hash_node_t));
	hash_node_t *ptr;

	/* validation */
	if (last_node == NULL)
		return (NULL);
	ptr = *head;
	if (*head == NULL)
		*head = last_node;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = last_node;
	}

	last_node->key =  malloc(sizeof(char) * strlen(key));
	if (last_node->key == NULL)
	{
		free(last_node);
		return (NULL);
	}
	last_node->value = malloc(sizeof(char) * strlen(value));
	if (last_node->value == NULL)
	{
		free(last_node->key);
		free(last_node);
		return (NULL);
	}
	last_node->key = strcpy(last_node->key, key);
	last_node->value = strcpy(last_node->value, value);

	last_node->next = NULL;
	return (last_node);
}


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

	node = add_node_end(&(ht->array[index]), key, value);
	if (node == NULL)
		return (0);
	else
		return (1);
}
