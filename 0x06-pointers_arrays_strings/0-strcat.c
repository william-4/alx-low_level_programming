#include "main.h"

/**
 * _strcat - appends src string to the dest string
 *@dest: input string
 *@src: input string
 *
 *Return: pointer to character(address to character array)
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
