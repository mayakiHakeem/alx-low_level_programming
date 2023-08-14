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
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
