#include "lists.h"

/**
 * delete_first_dnode - Remove the first node of a doubly linked list
 * @head: The head of the doubly linked list
 *
 * Return: 1 if is deleted
 */
int delete_first_dnode(dlistint_t **head)
{
	dlistint_t *current = *head, *temp = NULL;

	temp = current;
	if (current->next)
	{
		current = current->next;
		current->prev = temp->prev;
		*head = current;
	}
	else
	{
		*head = NULL;
	}
	free(temp);
	return (1);
}

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
	unsigned int size;

	ptr = *head;
	node = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		return (delete_first_dnode(head));
	}
	size = dlistint_len(*head);

	while (--index)
	{
		ptr = ptr->next;
		if (!ptr)
			return (-1);
	}
	if (size - 1 == index)
	{
	ptr->prev->next = ptr->next;
	}
	else
	{
		node = ptr->next;
		ptr->prev = node->prev;
		ptr->next = node->next;
	}
	free(node);
	return (1);
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
