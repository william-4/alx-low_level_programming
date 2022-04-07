#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

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
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/* allocate memory for the elements */
	ptr = malloc(nmemb * size);
	/* if malloc fails(returns NULL), return NULL */
	if (ptr == NULL)
		return (NULL);
	/* initialize the values at each index to zero */
	for (i = 0; i < nmemb; i++)
		*(int *)(ptr + i) = 0;
	return (ptr);
}

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
