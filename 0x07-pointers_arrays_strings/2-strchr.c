#include "main.h"
#include <stdio.h>

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

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}
	return (p);
}
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
