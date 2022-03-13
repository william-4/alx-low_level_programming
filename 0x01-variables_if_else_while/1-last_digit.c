#include <stdio.h>
/**
 *main - prints the last digit stored in variable n
 *@n: the input to be used
 *@p: stores the remainder after modulo operator
 *Return: 0(Success)
 */
int main(void)
{
	scanf("%d", &n);
      	p = n % 10;
	if (p>5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	}
	else if (p==0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else if (p<6 && p!=0)
	{
		printf("Last string of %d is less than 6 and not 0\n", n);
	}
	return (0);
}
