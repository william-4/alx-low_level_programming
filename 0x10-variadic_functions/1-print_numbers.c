#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string that seperates different numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		/**
		 * goes to the next argument in value of type int
		 */
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(ap);
}
