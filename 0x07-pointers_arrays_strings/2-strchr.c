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

        for (i = 0; s[i] != a; i++)
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
