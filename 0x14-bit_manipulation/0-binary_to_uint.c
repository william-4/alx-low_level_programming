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
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum = sum << 1;
		if (b[i] == '1')
			sum += 1;
	}
	return (sum);
}
