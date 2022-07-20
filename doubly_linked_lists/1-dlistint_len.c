#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*dlistint_len - returns the number of elements in a linked dlistint_t list.
*@h: variable
* Return: Always EXIT_SUCCESS.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int p = 0;

	while (h != NULL)
{
		p++;
		h = h->next;

}
	return (p);
}
