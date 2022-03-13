#include <stdio.h>

/**
 *pos_neg - prints whether a number is positive or negative
 *@n: random number generated externally
 *
 *Return:
 */

int main(int n)
{
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n)
	}
}
