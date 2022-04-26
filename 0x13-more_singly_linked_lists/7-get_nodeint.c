#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to the first node in the list
 * @index: index of node to be removed
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;

	while (i < index)
	{
		temp = head->next;
		head = temp;
		i++;
	}

	return (temp);
}
