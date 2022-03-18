#include "main.h"

/**
 * _isdigit - checks for a digit
 *@c: input digit
 *
 *Return: 1 if a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
