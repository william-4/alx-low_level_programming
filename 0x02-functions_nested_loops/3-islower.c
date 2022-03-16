#include "main.h"

/**
 *_islower - checks for lowercase character
 *@c: input character to be checked
 *
 *Return: 1 if c is lower, 0 otherwise
 */

int _islower(int c)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c == alpha)
			return (1);
	}
	return (0);
}
