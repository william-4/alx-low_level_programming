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

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
