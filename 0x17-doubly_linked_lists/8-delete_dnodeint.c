#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 *
 * @head: a pointer to the head of the single
 * linked list.
 * @index: he index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	dlistint_t *node = NULL;

	ptr = *head;
	node = *head;

	if (*head == NULL)
		return (-1);

	/* si el indice a cambiar es el head */
	if (!index)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (--index)
	{
		ptr = ptr->next;
		if (!ptr)
			return (-1);
	}
	node = ptr->next;
	ptr->prev = node->prev;
	ptr->next = node->next;
	free(node);

	return (1);
}
