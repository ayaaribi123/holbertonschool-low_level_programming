#include "dog.h"
#include <stdio.h>
/**
 * print_dog - check the code
 *
 * @d: dog
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("name: (nil)\n");

	if (d->age < 0)
		printf("age: (nil)\n");

	if (d->owner == NULL)
		printf("owner: (nil)\n");

	if (d == NULL)
		return;
}
