#ifndef HEADER_H
#define HEADER_H "dog.h"

/**
 * struct dog - dog data
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Description: Collects dog data.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
