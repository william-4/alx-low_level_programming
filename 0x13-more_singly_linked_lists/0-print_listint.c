#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the head of the listint_t list
 *
 * Return: size_t (ul which represents the size of any object in bytes)
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

/* (*h).n == h->n */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
