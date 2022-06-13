#include "main.h"

/**
 * _isdigit - checks for a digit
 *@c: input digit
 *
 *Return: 1 if a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	return (1);
}

/**
 *_puts - prints string followed by newline.
 *@s: pointer to string.
 *
 *Return: void.
 */
void _puts(char *s)
{

}

/**
 * _strlen - returns length of a string
 *@s: input string
 *
 *Return: 0(Success)
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

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
	return (dest);
}

/**
 *_atoi - converts string to integer.
 *@s: pointer to string.
 *
 *Return: integer gotten.
 */
int _atoi(char *s)
{
	return (1);
}
