#include <stdarg.h>

/**
 * sum_them_all - function that adds all the given parameters
 * @n: count of integers to add
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum;

	if (n == 0)
		return (0);
	/* initializes ap for subsequent use by va_arg() and va_end() */
	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		/**
		 * va_arg() macro expands to an expression that has the type
		 * and value of the next argument in the call
		 */
		sum += va_arg(ap, int);

	/* clean up */
	va_end(ap);
	return (sum);
}
