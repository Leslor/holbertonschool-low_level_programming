#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a
 * dlistint_t list.
 * @h: pointer to first element of the linked list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *ptr = h;

	for (; ptr != NULL; counter++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (counter);
}
