#include <stdio.h>
#include "main.h"

/**
*flip_bits - function that sets the value of a bit to 0 at a given index
*@m: variable
*@n: variable
* Return: Always 0.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, c = n ^ m;
		while (c != 0)
		{ 
			count += c & 1; 
			c >>= 1; 
		}
    return count; 
}
