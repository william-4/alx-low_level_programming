#ifndef DOG_H
#define DOG_H

/* typedef struct dog dog_t; */
/**
 * struct dog - user defined type for dog attributes
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: acts as a compound data type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
