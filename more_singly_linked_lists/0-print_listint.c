#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint - check the code
*@h: the variable
* Return: Always 0.
*/
size_t print_listint(const listint_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
return (a);
}
