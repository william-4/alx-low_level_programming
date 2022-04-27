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
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = head->next;
		head = temp;
		i++;
	}
	return (temp);
}
