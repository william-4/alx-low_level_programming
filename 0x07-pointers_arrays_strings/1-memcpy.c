#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: destination memory area
 *@src: source memory area
 *@n: no. of bytes to be copied
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
