#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input string to be printed out
 * @f: pointer to a function which takes name as input
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
