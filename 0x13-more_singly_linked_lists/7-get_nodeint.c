#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the listint_t list
 *
 * Return: size_t (number of elements in the linked list)
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = (*h).next; /* h->next */
	}
	return (i);
}

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

	if (head == NULL)
		return (NULL);

	int a = listint_len(head);

	temp = head;

	/*if (index > (a - 1))*/

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
