#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to input integer
 * @index: the index starting from right to left
 *
 * Return: 1 if it worked and -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int a = *n;
	unsigned long int temp;

	if (index > 63)
		return (-1);
	if (!n)
		return (-1);
	temp = 1 << index;
	a = a | temp;
	*n = a;

	return (1);
}
