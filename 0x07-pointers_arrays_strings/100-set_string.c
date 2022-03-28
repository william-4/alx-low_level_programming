#include "main.h"

/**
 *set_string - sets the value of a pointer to a char
 *@s: pointer to a pointer to a character array
 *@to: input pointer to a char array/string
 *
 *Return: void
 */
oid set_string(char **s, char *to)
{
	*s = to;
}
