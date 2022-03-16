#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: input character
 *
 *Return: 1 if a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	int upp;
	int loo;

	for (upp = 'A'; upp <= 'Z'; upp++)
	{
		for (loo = 'a'; loo <= 'z'; loo++)
		{
			if (c == upp || c == loo)
				return (1);
		}
	}
	return (0);
}
