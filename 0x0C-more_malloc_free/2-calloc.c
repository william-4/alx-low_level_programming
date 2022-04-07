#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc (same as calloc)
 * @nmemb: no of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/* allocate memory for the elements */
	ptr = malloc(nmemb * size);

/* if malloc fails(returns NULL), return NULL */
	if (ptr == NULL)
		return (NULL);

/* initialize the values at each index to zero */
	for (i = 0; i < (nmemb * size); i++)
		*((char *)(ptr) + i) = 0;
	return (ptr);
}
