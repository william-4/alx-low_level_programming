#include "main.h"

int get_bit(unsigned long int n, unsigned int index);

/**
 * flip_bits - returns no of bit to flip to get from n to m
 * @n: interger (from)
 * @m: integer (to)
 *
 * Return: number of bits I need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int count = 0;
	int index = 0;

	while (i < 64)
	{
		if (get_bit(n, index) != get_bit(m, index))
		{
			count++;
		}
		i++;
		index++;
	}
	return (count);
}

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input decimal number
 * @index: index to check
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ans;

	if (index > 64)
		return (-1);

	ans = (n >> index) & 1;

	return (ans);
}
