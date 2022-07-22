#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*puts2 - check the code
*
*@str: pointer
*Return: Always 0.
*/
void puts2(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
		putchar(str[i]);
	}
	putchar('\n');
}
