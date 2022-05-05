#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 *
 * @h: a pointer to the head of the single
 * linked list. *
 * @idx: the index of the list where the new node
 * should be added.
 * @n: data.
 *
 * Return: all nodes data sum.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = NULL;
	dlistint_t *node = NULL;

	/* validacion head */

	/* creacion y validacion del nuevo nodo */
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	ptr = *h;

	/* si el indice a cambiar es el head */
	if (!idx)
	{
		node->next = *h;
		*h = node;
		return (node);
	}
	while (--idx)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	node->next = ptr->next;
	node->prev = ptr->next;
	ptr->next = node;
	return (node);
}
