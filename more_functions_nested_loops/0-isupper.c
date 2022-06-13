#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
*_isupper - check uper and return 0 or 1
*
*@c: variable
*Return: 0 or 1
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
