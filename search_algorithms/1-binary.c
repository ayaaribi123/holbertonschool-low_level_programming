#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_search - Prints a list of integers
*@array: int
*@size: size_t
*@value: int
* Return: a sorted array of integers using the Binary search algorithm
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t h = size - 1;
	size_t l = 0;
	size_t m;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = l; l < h; i++)
	{
		printf("Searching in array: ");
		m = (h + l) / 2;
	while (i <= h)
	{
		if (i != l)
	{
		printf("%d , ", array[i]);
	}
		else
			printf("%d\n", array[i]);
		i++;
	}
		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
			h = m - 1;
	}
	return (-1);
}
