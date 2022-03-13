#include <stdio.h>

/**
 *main - prints whether a number is positive or negative
 *@n: random number generated externally
 *
 *Return: 0(Success)
 */

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n > 0)
	{
		printf("%ld is positive\n", &n);
	}
	else if (n < 0)
	{
		printf("%ld is negative\n", &n);
	}
	else
	{
		printf("%ld is zero\n", &n);
	}
	return (0);
}
