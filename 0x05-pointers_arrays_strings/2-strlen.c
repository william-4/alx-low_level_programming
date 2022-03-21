#include "main.h"

/**
 * _strlen - returns length of a string
 *@s: input string
 *
 *Return: 0(Success)
 */
int _strlen(char *s)
{
	int a;
	int b;

	a = 0;
	while (*s[b] != '\0')
	{
		a++;
		b++;
	}
	return (a);
}
