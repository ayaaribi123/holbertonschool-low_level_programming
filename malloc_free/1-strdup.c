#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code
 * @str: character
 * Return: 0
 */

char *_strdup(char *str)
{
char *p;
int i, len;

len = 0;
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	p = malloc((len + 1) * sizeof(char));

		if (p == NULL)
			return (NULL);

		for (i = 0 ; i < len ; i++)
		p[i] = str[i];

		p[len] = '\0';
	return (p);
}
