#include "dog.h"
#include <stdio.h>
/**
 * init_dog - check the code
 *
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
