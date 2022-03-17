#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: input character
 *
 *Return: 1 if c is upper and 0 otherwise
 */
int _isupper(int c)
{
	int alpha;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
			return (1);
	}
	return (0);
}
