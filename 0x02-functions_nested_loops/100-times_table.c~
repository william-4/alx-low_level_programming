#include "main.h"

/**
 *print_times_table - prints tables 1 to n
 *
 *Return: void
*/
void print_times_table(int n)
{
	int a, b, prod;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			prod = a * b;
			if (prod < 10 && b != n && b != 0)
			{
				_putchar(' ');
				_putchar(prod + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (prod >= 10 && b != n)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (prod < 10 && b == n && b != 0)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (b == 0)
			{
				_putchar('0' + prod);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
