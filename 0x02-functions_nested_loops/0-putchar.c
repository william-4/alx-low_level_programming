#include <unistd.h>

/**
 *main - Start of program execution
 *
 *Return: 0(Success)
 */
int main(void)
{
	const char msg[] = "_putchar\n";

	write(STDOUT_FILENO, msg, sizeof(msg) - 1);

	return (0);
}
