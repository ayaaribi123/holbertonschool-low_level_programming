#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: variable
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] > 0; i++)
{
	if (b[i] != '0' && b[i] != '1')
		return (0);
			n = n * 2;
		if (b[i] == '1')
			n = n + 1;
}
return (n);
}
