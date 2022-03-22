#include "lists.h"

/**
  * listint_len - function that returns the
  * number of elements in a linked list_t list
  * @h: head of the linked list
  * Return: Return the numbers of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	for (; h ; counter++)
		h = h->next;
	return (counter);
}
