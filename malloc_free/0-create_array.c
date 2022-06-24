#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - check the code
 * 
 * @c: character
 * @size: size
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (ar == NULL)
	{
		return(NULL);
	}
	else
	for (i = 0 ; i < size ; i++)
	{
	ar [i] = c;
	}
	return (ar);
}
