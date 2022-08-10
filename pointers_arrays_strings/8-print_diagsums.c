#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_diagsums - check the code
*
*@a: int
*@size: int
*Return: Always 0.
*/
void print_diagsums(int *a, int size)
{
	 int d1 = 0, d2 = 0;
	 int i;

	for (i = 0; i < size; i++)
{
		d1 += a[i];
		a += size;
}
		a -= size;
	for (i = 0; i < size; i++)
{
		d2 += a[i];
		a -= size;
}
	printf("%d, %d\n", d1, d2);
}
