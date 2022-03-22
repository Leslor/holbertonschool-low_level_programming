#include "lists.h"

/**
 * pop_listint - Frees a list_t list.
 * @head: A pointer to the list_t list.
 * Return: the data of the head delated.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node_data;

	if (!head || !*head)
		return (0);
	node_data = (*head)->n;
	if ((*head)->next == NULL)
		tmp = NULL;
	else
		tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (node_data);
}

