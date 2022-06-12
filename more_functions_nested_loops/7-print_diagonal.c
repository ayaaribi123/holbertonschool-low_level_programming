#include "main.h"
#include <stdio.h>
/**
*print_diagonal - check the code
*@n: variable
*
*Return: Always 0.
*/
void print_diagonal(int n)
{
int a;
int b;
if (n > 0)
{
for (a = 0; a < n ; a++)
{
for (b = 0 ; b < a ; b++)
{
putchar(' ');
}
putchar('\\')
putchar('\n');
}
}
else
{
putchar ('\n');
}
}
