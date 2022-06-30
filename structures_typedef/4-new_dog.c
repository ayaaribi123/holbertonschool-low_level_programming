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

	d = malloc(sizeof(dog_t));
	if ((name == NULL) || (age < 0) || (owner == NULL))
	{
		return (NULL);
	}
		if (d == NULL)
		{
			return (NULL);
		}
		if (d->name == NULL)
		{
			return (NULL);
		}
		if (d->age < 0)
		{
			return (NULL);
		}
		if (d->owner == NULL)
		{
			return (NULL);
		}
		if (d != NULL)
		{
			d->name = name;
			d->age = age;
			d->owner = owner;
		}
		free(d);
		free(d->name);
		free(d->owner);
		return (d);
}
