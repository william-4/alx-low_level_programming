#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate
 * @s1: destinatin string
 * @s2: source string
 * @n: no of bytes of s2
 *
 * Return: pointer to new string but if fail, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ns;
	unsigned int lenS1, lenS2, size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lenS1 = 0;
	while (s1[lenS1] != '\0')
		lenS1++;
	lenS2 = 0;
	while (s2[lenS2] != '\0')
		lenS2++;

	if (n >= lenS2)
		n = lenS2;
	size = lenS1 + n;

	ns = malloc((sizeof(char) * size) + 1);
	if (ns == NULL)
		return (NULL);
	i = 0;
	while (i < lenS1)
	{
		ns[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size)
	{
		ns[i] = s2[j];
		i++;
		j++;
	}
	ns[i] = '\0';
	return (ns);
}
