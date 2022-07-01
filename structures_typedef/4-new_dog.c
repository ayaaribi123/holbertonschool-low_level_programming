#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - check the code
 *
 *@name: name
 *@age: age
 *@owner: owner
 *Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if ((name == NULL) && (age < 0) && (owner == NULL))
	{
		return (NULL);

	}

	d = malloc(sizeof(dog_t));

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		return (NULL);
	}

	free(d);
	return (d);
}
