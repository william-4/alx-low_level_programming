#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase
 *
 *Return: 0(Success)
 */

void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
