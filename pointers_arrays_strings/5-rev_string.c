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
	int i;
	int j = 0;
	int len;
	char str; 

	len = strlen(s);

	for (i = 0 ; i < j / 2; i++)
	{
		str = s[i];
		s[i] = s [len];
		s[len--] = str;
	}

}
