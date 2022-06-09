#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a doubly linked list
 * @head: the first node in the list
 *
 * Return: the sum, if list is empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
