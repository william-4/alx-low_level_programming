#include "lists.h"

/**
  * len - gets number of nodes in a doubly lineked list
  * @h: pointer to first node in the  list.
  *
  * Return: number of elements in list.
  */
unsigned int len(dlistint_t *h)
{
	dlistint_t *temp;
	unsigned int count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

/**
 * delete_dnodeint_at_index - deletes a node at index idx
 * @head: the first node in the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if success and -1 if failed
 */
int delete_dnoeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2, *tp;
	unsigned int len = len(*head);

	if (*head == NULL || len < index)
		return (-1);
	temp = *head;
	if (index == 0 && (*head)->next == NULL)
	{
		free(temp), *head = NULL;
		return (1);
	}
	if (index ==  0 && (*head)->next != NULL)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
	}
	if (index > 0)
	{
		while (index != 0)
			temp = temp->next, index--;
		if (temp->next == NULL)
		{
			tp = *head;
			while (tp->next != NULL)
				tp = tp->next;
			temp2 = tp->prev;
			temp2->next = NULL, free(tp);
			return (1);
		}
		temp2 = temp->prev;
		temp2->next = temp->next;
		temp->next->prev = temp2;
	}
	free(temp);
	return (1);
}
