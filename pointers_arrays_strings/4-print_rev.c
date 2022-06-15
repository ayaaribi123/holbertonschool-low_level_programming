#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_rev - check the code
*
*@s: pointer
*Return: Always 0.
*/
void print_rev(char *s)
{
int i = 0;
int len;

len = strlen(s);
for (i = len ; i >= 0 ; i--)
{
putchar (s[i]);
}
putchar ('\n');
}
