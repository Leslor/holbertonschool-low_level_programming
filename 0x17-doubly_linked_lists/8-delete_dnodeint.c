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

	ptr = *head;
	node = *head;

	if (*head == NULL || head == NULL)
		return (-1);

	/* si el indice a cambiar es el head */
	if (index == 0)
	{
		return delete_first_dnode(head);
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
