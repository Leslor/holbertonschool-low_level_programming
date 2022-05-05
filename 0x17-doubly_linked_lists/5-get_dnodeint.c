#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns
 * the nth node of a doubly listint_t linked list.
 * @head: A pointer to the list_t list.
 * @index: the index of the node, starting at 0.
 * Return: the nth node of a dlistint_t linked or Null..
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (count < index)
	{
		head = head->next;
		if (!head)
			return (NULL);
		count++;
	}
	return (head);
}
