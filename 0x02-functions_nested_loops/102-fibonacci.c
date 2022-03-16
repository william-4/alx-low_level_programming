#include <stdio.h>

/**
 *main - Start of function
 *
 *Return: 0(Success)
 */

void main(void)
{
	int a = 0;
	int b = 1;
	int c;
	int count;

	for (count = 2; count <= 50; count++)
	{
		c = a + b;
		a = b;
		b = c;
		if (count == 50)
			printf("%d\n", c);
		else
			printf("%d, ", c);
	}
}
