#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable
 * @d: variable of type struct dog
 * @name: member of the struct for dog name
 * @age: member of the dog struct for dog age
 * @owner: memer of the struct for dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
