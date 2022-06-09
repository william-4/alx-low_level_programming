#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: first node in the list
 *
 * Return: void
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
