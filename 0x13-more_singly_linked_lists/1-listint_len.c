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
