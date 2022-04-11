#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a 'struct dog'
 * @d: pointer to a variable of type 'struct dog'
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (*d).owner);/* dereference then acces member */
}
