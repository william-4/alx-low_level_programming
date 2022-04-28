#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input decimal number
 * @index: index to check
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ans;

	if (index < 0 && index > 31 && !n)
		return (-1);

	ans = (n >> index) & 1;

	return (ans);
}
