#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strncpy - check the code
*
*@s1: pointer
*@s2: pointer
*Return: Always 0.
*/
int _strcmp(char *s1, char *s2)
{
	if (strlen(s1) == strlen(s2))
		return (0);
	else if (strlen(s1) < strlen(s2))
		return (13);
	else
		return (-13);
}
