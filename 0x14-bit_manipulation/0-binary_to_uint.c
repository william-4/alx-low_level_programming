#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string of 0 and 1 chars
 *
 * Return: converted number if successful or 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int power = 1;
	unsigned int sum = 0;

	if (*b == '\0')
		return (0);
	if (!b)
		return (0);

/* find length of array */
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--; /* i is now the index of the last element */

	while (i >= 0)
	{
		sum += (b[i] - '0') * power;
		power = power * 2;
		i--;
	}
	return (sum);
}
