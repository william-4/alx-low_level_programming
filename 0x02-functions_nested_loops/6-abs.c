#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@a: the value to be checked
 *
 *Return: 0
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = a - (2 * a);
	}
	else if (a > 0 || a == 0)
		a = a;
	return (0);
}
