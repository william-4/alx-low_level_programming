#ifndef DOG_H
#def DOG_H

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t; */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
