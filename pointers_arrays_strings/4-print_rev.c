#include "main.h"
#include <stdio.h>
/**
*print_rev - check the code
*
*@s: pointer
*Return: Always 0.
*/
void print_rev(char *s)
{
int i = 0;
_strlen(s);
int length;
length = _strlen(s);
for (i = length ; i >= 0 ; i--)
{
putchar (*s);
}
putchar (\n);
}
