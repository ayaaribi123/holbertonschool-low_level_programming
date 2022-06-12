#include "main.h"
#include <stdio.h>
/**
*print_triangle - check the code
*@size: variable
*
*Return: Always 0.
*/
void print_triangle(int size)
{
int a;
int b;
int c;
if (size > 0)
{
for (a = 1; a <= size ; a++)
{
for (b = size ; b > a ; b--)
{
putchar(' ');
}
for (c = 1 ; c <= a ; c++)
putchar('#');
putchar('\n');
}
}
else
{
putchar ('\n');
}
}