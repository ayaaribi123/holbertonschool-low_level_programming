#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - check the code
 * @s1: character
 * @s2: character
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *st;
	int i, b = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;


	st = malloc(len * sizeof(char));

	for (i = 0; s1[i]; i++)
		st[b++] = s1[i];

	for (i = 0; s2[i]; i++)
		st[b++] = s2[i];
	return (st);
}
