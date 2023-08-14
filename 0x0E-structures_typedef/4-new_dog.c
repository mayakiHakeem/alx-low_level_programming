#include <string.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: param for name of dog
 * @age: param for dog age
 * @owner: param for dog's owner
 *
 * Return: new_dog (success)
 * NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->name = strdup(name);
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}

	dog1->age = age;

	dog1->owner = strdup(owner);
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	return (dog1);
}