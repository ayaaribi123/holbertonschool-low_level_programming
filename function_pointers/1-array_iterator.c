#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - check the code
 *@array: character
 *@size: character
 *@action: character
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	
	for (i=0; i < size; i++)
	action(array[i]);
}