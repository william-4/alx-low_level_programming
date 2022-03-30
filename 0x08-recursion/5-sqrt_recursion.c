#include "main.h"

/**
 *helperFun - function to find the square root
 *@a: input number
 *@s: int to look for square root
 *
 *Return: the square root
 */
int helperFun(int a, int s)
{
	if (s * s == a)
		return (s);
	if (s * s > a)
		return (-1);
	return (helperFun(a, s + 1));
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: input int
 *
 *Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helperFun(n, 0));
}
