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
	if (n > 1)
		print_binary(n >> 1);

	printf("%ld", n & 1);
}
