#include "main.h"
#include <stdio.h>
/**
*print_square - check the code
*@size: variable
*
*Return: Always 0.
*/
void print_square(int size)
{
int a;
int b;
if (size > 0)
{
for (a = 0; a < size ; a++)
{
for (b = 0 ; b < size ; b++)
{
putchar('#');
}
putchar('\n');
}
}
else
{
putchar ('\n');
}
}
