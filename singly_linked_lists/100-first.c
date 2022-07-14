#include "lists.h"
#include <stdio.h>
void function(void) __attribute__ ((constructor));
/**
*function - check the code
*Return: Always 0.
*/
void function(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
