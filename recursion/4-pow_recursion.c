#include "main.h"
#include <math.h>
/**
*_pow_recursion - check the code
*@x: pointer
*@y: pointer
*Return: Always 0.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
if (y == 0)
{
	return (1);
}
	return (_pow_recursion(x ,y - 1) * x);
}
