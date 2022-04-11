#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog (new variable of type dog_t)
 * @name: input name string
 * @age: input age
 * @owner: input owner string
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, namelen, ownerlen;

	struct dog *doggy = NULL;

	namelen = 0;
	while (name[namelen] != '\0')
		namelen++;
	ownerlen = 0;
	while (owner[ownerlen] != '\0')
		ownerlen++;

	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->name = malloc(namelen + 1);
	if (doggy->name == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(ownerlen + 1);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i <= namelen; i++)
		doggy->name[i] = name[i];
	for (i = 0; i <= ownerlen; i++)
		doggy->owner[i] = owner[i];
	doggy->age = age;
	return (doggy);
}
