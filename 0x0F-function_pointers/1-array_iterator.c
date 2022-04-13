#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: input array
 * @size: size of array
 * @action: functon pointer that takes an int as argument
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
