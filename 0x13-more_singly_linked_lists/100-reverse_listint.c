 #include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to pointer to the first node in the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;

	while (*head != NULL)
	{
		temp2 = *head;
		*head = (*head)->next;
		temp2->next = temp;
		temp = temp2;
	}
	*head = temp2;

	return (*head);
}
