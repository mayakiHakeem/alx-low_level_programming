#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory allocated for dog
 * @d: dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
