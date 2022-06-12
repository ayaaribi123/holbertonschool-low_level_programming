#include "main.h"
#include <stdio.h>

/**
*_isdigit - check the code
*
*@c: variable
*Return: 0 or 1
*/
int _isdigit(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
