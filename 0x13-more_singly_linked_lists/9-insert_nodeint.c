#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the first node
 * @idx: index where the new node should be added
 * @n: element to add
 *
 * Return: address of new node/ pointer to the new node
 */
listint_t  *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i = 0;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	while (i < (idx - 1))
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
