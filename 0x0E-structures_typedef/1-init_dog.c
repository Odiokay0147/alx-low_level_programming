#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable type struct dog
 * @c: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */
void init_dog(struct dog *c, char *name, float age, char *owner)
{
	if (c == NULL)
		c = malloc(sizeof(struct dog));
	c->name = name;
	c->age = age;
	c->owner = owner;
}

