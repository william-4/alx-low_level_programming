#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: pointer to the first node in the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head != NULL)
	{
		a = head;
		free(a->str);
		head = head->next;
		free(a);
	}
}
