#include "main.h"
#include <math.h>
int _sqrt_recursion(int n);
/**
 *
 *_sqrt - check the code
 *@n: pointer
 *Return: Always 0.
 */
int _sqrt(int n, int x)
{
	if (x == n)
	{
		return (x);
	}

	if (x == 0)
	{
		return (-1);
	}
	else
		return (_sqrt(n, x + 1));
}
int _sqrt_recursion(int n)
{
	int x;
	x = 1;
	if (x < 0)
	{
		return (-1);
	}

	return (_sqrt(n, x));
}
