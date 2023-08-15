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
			d->name = "(nil)";
		if (d->owner)
			d->owner = "(nil)";


		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
