#include "lists.h"

/**
  * add_nodeint_end - function that adds a new node
  * at the beginning of a doubly list_t list
  * @head: head of the doubly linked list
  * @n: ...
  * Return: the address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* creating the last nodo */
	dlistint_t *last_node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr;

	/* validation */
	if (last_node == NULL)
		return (NULL);
	ptr = *head;
	if (*head == NULL)
		*head = last_node;
	else
	{
		/*finding the last Node*/
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = last_node;
	}
	last_node->prev = ptr;
	last_node->n = n;
	last_node->next = NULL;
	return (last_node);
}
