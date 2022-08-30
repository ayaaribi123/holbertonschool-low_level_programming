#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
*linear_search - Prints a list of integers
*@array: int
*@size: size_t
*@value: int
* Return: a value in an array of integers
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
