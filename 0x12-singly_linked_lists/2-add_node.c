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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer of the first node in the list
 * @str: string to be added
 *
 * Return: address of new node, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	a->next = *head;
	a->str = strdup(str);
	a->len = stringlen(str);

	*head = a;

	return (*head);
}
