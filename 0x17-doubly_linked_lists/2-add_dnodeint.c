#include "lists.h"

/**
  * add_dnodeint - function that adds a new node
  * at the beginning of a dlistint_t list
  * @head: head of the doubly linked list
  * @n: ...
  * Return: Return the address of the new element.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	/*Validation of node NULL*/
	if (node == NULL)
		return (NULL);
	if (*head)
	{
		node->next = *head;
		node->prev = NULL;
		(*head)->prev = node;
		*head = node;
		node->n = n;
		return (*head);
	}

	node->prev = NULL;
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
