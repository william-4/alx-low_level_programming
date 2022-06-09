#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index idx
 * @head: the first node in the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if success and -1 if failed
 */
int delete_dnoeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	int i;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
