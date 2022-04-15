#include <stdarg.h>
#include <stdio.h>

/**
 * strlength - finds the length of a string
 * @s: input string/ character array
 *
 * Return: int(length of the string)
 */
int strlength(const char * const s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

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
	while (a < strlength(format)) /* format && format[i] */
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
