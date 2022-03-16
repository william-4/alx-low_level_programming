#include "main.h"

/**
 *print_to_98 - prints numbers from n to 98
 *@n: starting point
 *
 *Return: 0
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				_putchar(i);
				_putchar('\n');
			}
			else
			{
				_putchar(i);
				_putchar(',');
				_putchar('\n');
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				_putchar(i);
				_putchar('\n');
			}
			else
			{
				_putchar(i);
				_putchar(',');
				_putchar('\n');
			}
		}
	}

}
