include "main.h"

/**
 *reverse_array - reverse an input array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int a, b;

	n = n - 1;
	b = 0;
	while (b <= n)
	{
		a = a[b];
		a[b++] = a[n];
		a[n--] = a;
	}
}
