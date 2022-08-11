#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check the code
 * @s1: character
 * @s2: character
 * @n: character
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b, c;

	if (s1 == NULL && s2 == NULL)
		{a = ""; }
	if (s1 == NULL)
		{s1 = ""; }
	if (s2 == NULL)
		{s2 = ""; }
		if (n >= strlen(s2))
		c = strlen(s1) + strlen(s2);
		else
			c = strlen(s1) + n;
	a = malloc(sizeof(char) * (c + 1));

	if (a == NULL)
		{ return (NULL); }
	for (b = 0; b < c; b++)
	if (b < strlen(s1))
		a[b] = s1[b];
	else
		a[b] = s2[b - strlen(s1)];
	a[c] = '\0';
	return (a);
}
