#include "main.h"
/**
* print_last_digit - check the code
*@a: variable
*Return: Always 0.
*/
int print_last_digit(int a)
{
int n;
n = a % 10;
if (n < 10)
n *= -1;

_putchar (a + '0');
    return (a);
 }
