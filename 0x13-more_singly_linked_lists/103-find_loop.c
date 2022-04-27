#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the first node in the list
 *
 * Return: address of the node where the loop start or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one, *two, *temp;

	/* introduce two pointers to transverse the list till they meet */
	one = two = head;
	while (two != NULL && two->next != NULL)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
			break;
	}
	if (one == two)
	{
		temp = head;
		while (slow != temp)
		{
			temp = temp->next;
			slowPtr = slowPtr.next;
		}
		return (temp);
	}
	return (NULL);
}
