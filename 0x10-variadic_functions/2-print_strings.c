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
		if (va_arg(ap, char *) == NULL)
			printf("(nil)");
		printf("%s", va_arg(ap, char *));
		if (i < n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(ap);
}
