#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to pointer to the first noe
 * @index: index of node to be deleted
 *
 * Return: 1 if successful and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *next, *temp;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	next = temp->next->next;
	free(temp->next);
	temp->next = next;

	return (1);
}
