#include "lists.h"
/**
 * reverse_listint - a function that reversed list
 * @head: a pointer to the head of the single
 * linked listint.
 *
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
		listint_t *ptr = NULL, *ptr2 = NULL;
		while (*head != NULL)
		{
				ptr = *head;
				*head =(*head)->next;
				ptr->next = ptr2;
				ptr2 = ptr;
		}
		*head = ptr2;
		return (*head);
}
