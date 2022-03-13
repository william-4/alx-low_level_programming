#include <stdio.h>

/**
 *main - Entry point of program
 *
 *Return: 0(Success)
 */
int main(void)
{
	char alpha = 'a';

	do {
		if (alpha == 'e' || alpha == 'q')
		{
			alpha += 1;
			continue;
		}
		putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	putchar('\n');
	return (0);
}
