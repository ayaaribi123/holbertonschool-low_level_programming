#include <stdio.h>
#include "main.h"

/**
*set_bit - sets the value of a bit to 1 at a given index
*@index: variable
*@n: variable
* Return: Always 0.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	i = 1 << index;
	*n = *n | i;
	return (1);
}
