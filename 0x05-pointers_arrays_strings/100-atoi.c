#include "main.h"
#include <stdio.h>

/**
 *_atoi - converts string to integer.
 *@s: pointer to string.
 *
 *Return: integer gotten.
 */
int _atoi(char *s)
{
	int int1, int2;
	unsigned int a;
	int b = 1;
	char c;

	int1 = 0;
	a = 0;
	while (*(s + int1) != '\0')
	{
		c = *(s + int1);
		if (c == '-')
		{
			b *= -1;
		}
		if (c >= '0' && c <= '9')
		{
			int2 = int1;
			while (*(s + int2) > 47 && *(s + int2) < 58)
			{
				a = (a * 10) + *(s + int2) - '0';
				int2++;
			}
			break;
		}
		int1++;
	}
	if (b < 0)
		a *= b;
	return (a);
}
