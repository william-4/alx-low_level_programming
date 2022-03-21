#include "main.h"

/**
 *_strcpy - copy string pointed by src to the end of another buffer pointed
 * to by dest including \0.
 *@dest: pointer to string to be copied to.
 *@src: pointer to string to be copied.
 *
 *Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
