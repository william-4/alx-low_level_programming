#include "main.h"

/**
 *function that prints the sum of the two diagonals of a square matrix of
 * integers
 *@a: input int array
 *@size: input int
 *
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, n;
	unsigned int s1, s2;

	n = 0;
	s1 = 0;
	s2 = 0;

	n = (size * size) - 1;

	for (i = 0; i <= n; i = i + (size + 1))
	{
		s1 = s1 + a[i];
	}
	for (i = (size - 1); i < n; i = i + (size - 1))
	{
		s2 = s2 + a[i];
	}
	printf("%d, %d\n", s1, s2);
}
