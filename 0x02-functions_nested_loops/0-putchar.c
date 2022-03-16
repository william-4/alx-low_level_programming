#include <unistd.h>

/**
 *_putchar - Prints putchar
 *
 *Return: 0(Success)
 */
int _putchar()
{
	const char msg[] = "_putchar\n";
	write(STDOUT_FILENO, msg, sizeof(msg) - 1);

	return (0);
}

int main(void)
{
	_putchar();

	return (0);
}
