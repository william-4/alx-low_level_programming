#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with char c
 * @size: the size of the array
 * @c: char to be used in initialisation
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	/* allocate memory for the array */
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
