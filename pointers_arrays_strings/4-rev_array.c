#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strncpy - check the code
*
*@a: pointer
*@n: pointer
*Return: Always 0.
*/
void reverse_array(int *a, int n)
{
	int c;
	int i;
	for (i = 0; i < n ; i++)
	{
		n--;
		n = a[i];
		a[i] = c;
		c = n;
	}
}
