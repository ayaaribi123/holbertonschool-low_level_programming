#include "main.h"
#include <stdio.h>
/**
* add - check the code
*@n: variable
*Return: Always 0.
*/
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	for (; n >= 98; n--)
	{
		printf("%d\n,", n);
	}
}
