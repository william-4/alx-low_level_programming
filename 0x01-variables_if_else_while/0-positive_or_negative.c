#include <stdio.h>

/**
 *pos_neg - prints whether a number is positive or negative
 *@n: random number generated externally
 *
 *Return:
 */

int main()
{
	int n;

	scanf("%d", &n);

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return 0;
}
