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
	unsigned int size;

	if (h == NULL || idx < 0)
		return (NULL);

	size = dlistint_len(*h);

	if (*h == NULL && idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (size == idx)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	ptr = *h;
	while (--idx)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));
	node->next = ptr->next;
	node->prev = ptr->next;
	ptr->next = node;
	return (node);
}

/**
 * dlistint_len - function that returns the
 * number of elements in a double linked list_t list.
 *
 * @h: head of the linked list
 * Return: the number of elements in a linked list_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *ptr = h;

	for (; ptr != NULL; counter++)
	{
		ptr = ptr->next;
	}
	return (counter);
}
