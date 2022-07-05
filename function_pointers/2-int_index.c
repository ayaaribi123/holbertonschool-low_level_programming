#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - check the code
 *@array: character
 *@size: character
 *@cmp: function
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
				return(i);
	return (i);
}
