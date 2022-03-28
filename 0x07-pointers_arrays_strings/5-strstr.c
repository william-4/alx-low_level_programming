#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: input string
 *@needle: input string
 *
 *Return: pointer to the beginning of the located substring or NULL
 * if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*b && *haystack && *haystack == *b)
		{
			haystack++;
			b++;
		}

		if (!*b)
		{
			return (a);
		}

		haystack = a + 1;
	}
	return (0);
}
