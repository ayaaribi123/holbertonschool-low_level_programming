#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - check the code
 * @min: character
 * @max: character
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
	{
		return (NULL);
	}
	s = (max - min) + 1;
	a = malloc(s * sizeof(int));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		a[i] = min++;
	}
	return (a);
}
