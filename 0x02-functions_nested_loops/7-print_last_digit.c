#include "main.h"

/**
 *print_last_digit - prints the last digit
 *@a: the input number
 *
 *Return: 0(Success)
 */
int print_last_digit(int a)
{
	int lastd;

	if (a >= 0)
	{
		lastd = a % 10;
	}
	else
	{
		lastd = (a % 10) * -1;
	}
	_putchar('0' + lastd);
	return (lastd);
}
