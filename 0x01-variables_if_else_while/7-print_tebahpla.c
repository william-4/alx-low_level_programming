#include <stdio.h>

/**
 *main - Start of program execution
 *
 *Return: 0(Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
}
