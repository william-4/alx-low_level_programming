#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int a;
	char *b;
	char *seperator = "";

/* initializes ap to first optional argument */
	va_start(ap, format);/* last named parameter is a string */

	a = 0;
	while (format && format[a]) /* a < strlen(format) */
	{
		switch (format[a])
		{
		case 'c':
			printf("%s%c", seperator, va_arg(ap, int));
			break;
		case 'i':
			printf("%s%d", seperator, va_arg(ap, int));
			break;
		case 'f':
			printf("%s%f", seperator, va_arg(ap, double));
			break;
		case 's':
			b = va_arg(ap, char *);
			if (b == NULL)
				b = "(nil)";
			printf("%s%s", seperator, b);
			break;
		default:
			a++;
			continue;
		}
		seperator = ", ";
		a++;
	}
	printf("\n");
	va_end(ap);
}
