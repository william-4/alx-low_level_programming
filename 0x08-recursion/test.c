#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: input int
 *
 *Return: int
 */
int _sqrt_recursion(int n)
{
	int a = 0;

	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	++a;
	_sqrt_recursion(n);
}
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
