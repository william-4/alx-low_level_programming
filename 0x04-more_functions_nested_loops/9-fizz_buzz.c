#include <stdio.h>

/**
 *fizz_buzz - fizz_buzz test
 *Return: void
 */
void main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", "FizzBuzz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
}
