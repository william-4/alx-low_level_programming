#include "main.h"

/**
 *helperFun - checks if a number is prime
 *@a: input number
 *@b: int to use to check
 *
 *Return: int
 */
int helperFun(int a, int b)
{
	if (b < a)
	{
		if (a % b == 0)
			return (0);
		else
			return (helperFun(a, b + 1));
	}
	else
		return (1);
}

/**
 *is_prime_number - checks if a number is a prime number
 *@n: input int to be checked
 *
 *Return: 1 if success and 0 if fail
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFun(n, 2));
	}
}
