#include "main.h"

/**
 *times_table - prints tables 1 to 9
 *
 *Return: void
*/
void times_table(void)
{
	int a, b, prod;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			prod = a * b;
			if (prod < 10 && b != 9)
			{
				_putchar(' ');
				_putchar(prod);
				_putchar(',');
				_putchar(' ');
			}
			else if (prod >= 10 && b != 9)
			{
				_putchar(prod);
				_putchar(',');
				_putchar(' ');
			}
			else if (prod < 10 && b == 9)
			{
				_putchar(' ');
				_putchar(prod);
			}
			else
				_putchar(prod);
		}
		printf("\n");
	}
}
