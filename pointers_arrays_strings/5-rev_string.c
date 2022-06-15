#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*rev_string - check the code
*
*@s: pointer
*Return: Always 0.
*/
void rev_string(char *s)
{
int i = 0;
int len;

len = strlen(s);
for (i = (len - 1) ; i >= 0 ; i--)
{
putchar (s[i]);
}
putchar ('\n');
}
