#include <stdio.h>

/**
 *main - start of execution
 *
 *Return: 0 always.
 */
int main(void)
{
	long int i, a = 1, b = 2, sum = 0, total = 0;

	for (i = 0; i < 49; i++)
	{
		if ((b % 2 == 0) && (b <= 4000000))
		{
			total = total + b;
		}
		sum = a + b;
		a = b;
		b = sum;

	}
	printf("%ld\n", total);
	return (0);
}
