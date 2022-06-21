#include "main.h"
#include <math.h>
int _sqrt_recursion(int n);
/**
 *
 *_sqrt - check the code
 *@n: pointer
 *Return: Always 0.
 */
int _sqrt(int n, int root)
{
	if (n == root * root)
	{
		return (root);
	}

	if (root == n / 2)
	{
		return (-1);
	}
	else
		return (_sqrt (n, root + 1 ));
}
int _sqrt_recursion(int n)
{

	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (_sqrt(n, root));
}
