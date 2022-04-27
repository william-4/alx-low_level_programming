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
	listint_t *temp;
	unsigned int i = 0;
	listint_t *b;

	b = *head;
	temp = *head;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}

	while (i < (index - 1))
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}

	b = temp->next;
	temp->next = temp->next->next;
	b->next = NULL;
	free(b);
	return (1);
}
