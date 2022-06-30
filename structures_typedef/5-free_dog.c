#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - check the code
 * @d: dog
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
{
		return;

		free(d);
}
}
