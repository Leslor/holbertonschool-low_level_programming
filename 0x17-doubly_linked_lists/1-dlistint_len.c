#include "lists.h"

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
