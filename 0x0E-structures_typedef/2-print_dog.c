#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print struct
 * @d: struct variable
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)");

		printf("Age: %f\n", d->age);

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)");
	}
}
