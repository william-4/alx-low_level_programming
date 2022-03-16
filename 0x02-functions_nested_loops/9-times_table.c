#include "main.h"

/**
 *times_table - prints table 1 to 9
 *
 *Return: void
 */
void times_table(void)
{
	int a, b, prod;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			prod = a * b;
			if (a == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod >= 10)
			{
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			if (b != 9)
			{
				_putchar(',');
			}
		}
	}
}
