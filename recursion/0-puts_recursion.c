#include "main.h"
#include <stdio.h>
/**
*_puts_recursion - check the code
*@s: pointer
*Return: Always 0.
*/
void _puts_recursion(char *s)
{
	if (s == '/0')
{
	return ; 
	putchar('\n');
}
_puts_recursion (s);
}