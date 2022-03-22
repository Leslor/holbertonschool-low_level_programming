#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns
 * the nth node of a listint_t linked list.
 * @head: A pointer to the list_t list.
 * @index: the index of the node, starting at 0.
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (count < index):
	{
		head = head->next;
		count++;
	}
	return (head);
}
