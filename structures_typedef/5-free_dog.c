#include "dog.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * free_dog - check the code
 *
 * @d: dog
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	free(d->owner);
	free(d->name);
	free(d->age);
	free(d);
}
