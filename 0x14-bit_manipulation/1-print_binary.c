#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * not using arrays, malloc, % and /
 * @n: input integer to convert into binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (!n)
		return;
	if (n == 0)
		_putchar('0');
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
