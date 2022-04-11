#include <stdlib.h>

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
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
