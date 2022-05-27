#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into .
 * @key: key you are looking for
 * Return:  the value associated with the element
 * or NULL if key couldn’t be found.
 */


void hash_table_print(const hash_table_t *ht)
{

	hash_node_t *tmp;
	unsigned long int index;
	
	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		for (tmp = ht->array[index]; tmp; tmp = tmp->next)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next)
			{
				printf(",");
			}
		}
		if (ht->array[index] != NULL)
			printf(",");
	
	printf("}");
	printf("\n");
}
