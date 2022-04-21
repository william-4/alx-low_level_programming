#include "lists.h"

/**
 *stringlen - find the length of a string
 *@str: input string
 *
 * Return: length of the input string
 */
int stringlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to a pointer of the first node
 * @str: new node to be added
 *
 * Return: pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (new);
}
