#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int alpha;

	while (i <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		i++;
	}
}
