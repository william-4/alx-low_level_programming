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

	if (h == NULL)
		exit(1);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
