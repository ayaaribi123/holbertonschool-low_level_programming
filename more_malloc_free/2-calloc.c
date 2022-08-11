#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - check the code
 * @size: character
 * @nmemb: character
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *a;
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}
	count = nmemb * size;
	a = arr;
	for (i = 0; i < count; i++)
	{
		a[i] = 0;
	}
	return (arr);
}
