#include <stdio.h>
/**
 *main - prints the last digit stored in variable n
 *@n: input number
 *@p: remainder
 *
 *Return: 0(Success)
 */
int main(void)
{
	int n;
	int p;

	scanf("%d", &n);

	p = n % 10;
	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	}
	else if (p == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, p);
	}
	else if (p < 6 && p != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, p);
	}
	return (0);
}
