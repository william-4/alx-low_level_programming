#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: the first node in the list
 * @index: the index of the node to be removed
 *
 * Return: the address of the node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	temp = head;
	while (index != 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
