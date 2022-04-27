#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the first node in the list
 *
 * Return: address of the node where the loop start or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one, *temp;

	/* introduce two pointers to transverse the list till they meet */
	one = temp = head;
	while (temp != NULL && temp->next != NULL)
	{
		one = one->next;
		temp = temp->next->next;
		if (one == temp)
			break;
	}
	if (one == temp)
	{
		temp = head;
		while (one != temp)
		{
			temp = temp->next;
			one = one.next;
		}
		return (temp);
	}
	return (NULL);
}
