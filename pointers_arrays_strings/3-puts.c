#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_puts - check the code
*
*@str: pointer
*Return: Always 0.
*/
void _puts(char *str)
{
    int i = 0;
int len;

len = strlen(str);
for (i = (len - 1) ; i >= 0 ; i++)
{
putchar (str[i]);
}
putchar ('\n');
}

