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
			if (prod < 10 && b != 9 && b != 0)
			{
				_putchar(' ');
				_putchar(prod + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (prod >= 10 && b != 9)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (prod < 10 && b == 9 && b != 0)
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
