#include <stdio.h>

/**
 *main - Start of program execution
 *
 *Return: 0(Success)
*/
int main(void)
{
	int num = '0';

	while (num >= '0' && num < '9')
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	if (num == '9')
		putchar(num);
	return (0);
}
