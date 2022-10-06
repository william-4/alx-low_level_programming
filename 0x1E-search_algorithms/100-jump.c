#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *	using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located.
 *	-1 if array is NULL or value is not present in array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev;
	size_t idx = 0;

	if (!array)
		return (-1);
	while (value > idx[array] && idx <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, idx[array]);
		prev = idx;
		idx += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, idx);

	while (prev <= idx)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, prev[array]);
		if (idx > size)
			return (-1);
		if (prev[array] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
