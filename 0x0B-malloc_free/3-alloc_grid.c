#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: elements in each array
 * @height: number of arrays
 *
 * Return: pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int *arr;
	int i;

	arr = malloc((width * height) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (width * height); i++)
		*arr[i] = 0;
}
