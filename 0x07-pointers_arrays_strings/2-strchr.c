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
	char *p;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}
	if (s[i] == c)
	{
		p = &s[i];
	}
	return (p);
}
