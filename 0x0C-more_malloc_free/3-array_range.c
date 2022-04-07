#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting value
 * @max: last value
 *
 * Return: pointet to newly created array
 */
int *array_range(int min, int max)
{
	int size;
	int i;
	int *p;

	size = 0;

	if (min > max)
		return (NULL);

	size = ((max + 1) - min);

	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
