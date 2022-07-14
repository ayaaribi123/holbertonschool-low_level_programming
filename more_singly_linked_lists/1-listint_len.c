#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* listint_len - check the code
*@h: the variable
* Return: Always 0.
*/
size_t listint_len(const listint_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
