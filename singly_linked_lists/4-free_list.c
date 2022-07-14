#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
*free_list - check the code
*@head: head
*Return: Always 0.
*/
void free_list(list_t *head)
{
		list_t *f;

		while (head != NULL)
		{
			f = head->next;
			free(head->str);
			free(head);
			head = f;
		}
		free(head);
}
