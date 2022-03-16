#include <stdio.h>

void main(void)
{
	int a, b, prod;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			prod = a * b;
			if (prod < 9)
				printf(" %d, ", prod);
			if ()
				printf("%d, ", prod);
			if (a < 9)
				printf("%d");
		}
		printf("\n");
	}
}
