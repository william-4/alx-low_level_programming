#include <stdio.h>

/**
 *main - Start of execution
 *
 *Return: 0(Success)
*/
int main(void)
{
	/*
	 *for numbers 0-9
	 *
	 */
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for(b = '0'; b <= '9'; b++)
		{
			if (a != b && b > a)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
