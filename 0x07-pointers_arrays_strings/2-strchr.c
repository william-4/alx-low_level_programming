#include "main.h"

/**
 * _strchr - locates a character in a string
 *@s: input string
 *@c: character to locate
 *
 *Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;
	char a = '\0';

	i = 0;
	while (s[i] != a)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}
	if (s[i] == c)
		p = &s[i];
	return (p);
}
