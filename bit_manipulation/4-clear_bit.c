#include <stdio.h>
#include "main.h"

/**
*clear_bit - function that sets the value of a bit to 0 at a given index
*@index: variable
*@n: variable
* Return: Always 0.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = ~(1 << index);

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & i;
	return (1);
}
