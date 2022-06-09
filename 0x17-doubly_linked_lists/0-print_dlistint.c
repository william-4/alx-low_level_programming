#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: the first node in the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
