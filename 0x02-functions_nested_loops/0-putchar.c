#include <unistd.h>

/**
 *_putchar - Prints putchar
 *
 *Return: 0(Success)
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}

int main(void)
{
       	_putchar('a');

	return (0);
}
