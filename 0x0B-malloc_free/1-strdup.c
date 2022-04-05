#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, containing
 * a copy of the parameter str
 * @str: input string
 *
 * Return: pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *ptr;
	int length = 0;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

/* find the length of str */
	for (i = 0; str[i] != '\0'; i++)
	{
		++length;
	}
	ptr = malloc(++length * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < length; j++)
	{
		ptr[j] = str[j];
	}
	ptr[length] = '\0';
	return (ptr);
}
