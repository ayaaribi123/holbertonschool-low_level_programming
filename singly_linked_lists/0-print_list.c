#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_list - check the code
*@h: the variable
* Return: Always 0.
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{

		if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
		else
		printf("[0] (nil)\n");
		h = h->next;
		i++;

}
	return (i);
}
