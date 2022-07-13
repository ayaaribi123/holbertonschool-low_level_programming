#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* list_len - check the code
*@h: the variable
* Return: Always 0.
*/
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;

	}
return (i);
}
