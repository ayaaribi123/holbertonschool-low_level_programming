#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - check the code
 *@name: character
 *@f: character
 *Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	else
	{
	f(name);
}
}
