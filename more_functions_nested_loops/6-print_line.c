#include "main.h"
#include <stdio.h>
/**
*print_line - check the code
*@n: variable
*
*Return: Always 0.
*/
void print_line(int n)
{
int a;
if (n > 0)
{
for (a = n; a > 0; a--)
{
putchar('_');
}
putchar('\n');
}
else 
{
putchar ('\n');
}
}
