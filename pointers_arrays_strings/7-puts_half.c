#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*puts_half - check the code
*@str: pointer
*Return: Always 0.
*/
void puts_half(char *str)
{
	int i, n;
	int l = strlen(str);

	n = (l - 1) / 2;
	for (i = 0; i < l; i++)
	{
		if (n < i)
		putchar(str[i]);
	}
	putchar('\n');
}
