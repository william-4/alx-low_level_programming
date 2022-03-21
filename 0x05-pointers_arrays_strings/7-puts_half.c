#include "main.h"

/**
 *puts_half - prints half of a string.
 *@str: pointer to string.
 *
 *Return: void.
 */
void puts_half(char *str)
{
	int n, m, p;

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}

	if (m % 2 == 0)
	{
		p = m / 2;
		for (n = p; n < m; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		p = (m - 1) / 2;
		for (n = p + 1; n < m; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
