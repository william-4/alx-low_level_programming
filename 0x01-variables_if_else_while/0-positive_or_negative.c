#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints whether a number is positive or negative
 *@n: random number
 *
 *Return: 0(Success)
 */

int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
