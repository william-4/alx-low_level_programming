#include "main.h"

/**
 * _strncat - append src to dest using n bytes from src
 *@dest: pointer to input string
 *@src: pointer to input string
 *@n: number of bytes to be concatenated/number of characters
 *
 *Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
