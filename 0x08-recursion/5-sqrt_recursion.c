#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: input int
 *
 *Return: int
 */
int helperFun(int a, int s)
{
	if (s * s == a)
		return (s);
	if (s * s > a)
		return (-1);
	return (helperFun(a, s + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helperFun(n, 0));
}
