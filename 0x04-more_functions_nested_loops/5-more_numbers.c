#include "main.h"

/**
 *more_numbers - prints 10 times the numbers from 0-14
 *Return: void
 */
void more_numbers(void)
{
	int i, b;

	i = 0;
	while (i < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b > 9)
				_putchar('0' + b / 10);
			_putchar('0' + b % 10);
			b++;
		}
		_putchar('\n');
		i++;
	}
}
