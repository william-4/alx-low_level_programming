#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input string
 *@accept: input string
 *
 *Return: pointer to the byte in s that matches one of the bytes in accept
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *p;

	p = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
		}
	}
	return (p);
}
