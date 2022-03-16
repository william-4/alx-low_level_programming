#include <stdio.h>

/**
 *main - Start of function
 *
 *Return: 0(Success)
 */
int main(void)
{
	int i;
	int s = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			s += i;
		}
	}
	printf("%d\n", s);
	return (0);
}
