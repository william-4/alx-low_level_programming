#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @seperator: string to be printed between the strings
 * @n: numbers of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (i == (n - 1))
		{
			printf("\n");
			return;
		}
		printf("%s", seperator);
	}
	va_end(ap);
}
