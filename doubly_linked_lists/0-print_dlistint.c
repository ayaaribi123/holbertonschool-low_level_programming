#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*print_dlistint -  prints all the elements of a dlistint_t list.
*@h: variable
* Return: Always EXIT_SUCCESS.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int p = 0;

	while (h != NULL)
{
		printf("%d\n", h->n);
		p++;
		h = h->next;

}
	return (p);
}
