#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index idx
 * @h: double pointer to the first node in the doubly linked list
 * @idx: the index
 * @n: the value of the new node
 * 
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *temp;
	int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *h;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = temp;
		next = temp->next;
		temp->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
