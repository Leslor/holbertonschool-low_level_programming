#include "lists.h"

/**
  * _strlen -  function that returns the length of a string
  * @s: ...
  * Return: returns the length of a string
  */

int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
  * add_node - function that adds a new node
  * at the beginning of a list_t list
  * @head: head of the linked list
  * @str: needs to be duplicated
  * Return: Return the address of the new element.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	node->str = strdup(str);
	node->len = _strlen(node->str);
	node->next = **head;
	*head = node;
	return (node);
}
