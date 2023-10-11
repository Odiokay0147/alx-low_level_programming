#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog basic information
 * @c: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *c, char *name, float age, char *owner);
void print_dog(struct dog *c);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *c);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
