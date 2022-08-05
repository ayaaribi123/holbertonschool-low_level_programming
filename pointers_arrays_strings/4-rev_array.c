#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*reverse_array - check the code
*
*@a: pointer
*@n: pointer
*Return: Always 0.
*/
void reverse_array(int *a, int n)
{
	int c;
	int i;
	int b;

	for (i = 0; i > n ; i--)
	{
		n = a[i];
		a[i] = c;
		c = n;
	}
	for (b = 1; i < b; b++)
	{
		n = a[b];
		a[b] = c;
		c = n;
	}
}
