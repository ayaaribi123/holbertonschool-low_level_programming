#include <stdio.h>
/**
 *print_name - check the code
 *@name: character
 *@f: character
 *Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	return;
}
