#include <unistd.h>

/**
 *_putchar - Prints putchar
 *
 *Return: 0(Success)
 */
int main(void)
{
	const char msg[] = "_putchar\n";
	write(STDOUT_FILENO, msg, sizeof(msg) - 1);

	return (0);
}
