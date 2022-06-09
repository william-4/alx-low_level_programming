#include "lists.h"

/**
 * slistint_len - returns the number of elements in a doubly linked list
 * @h: the first node in the list
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
