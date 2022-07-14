#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
*free_listint - check the code
*@head: head
*Return: Always 0.
*/
void free_listint(listint_t *head)
{
		listint_t *f;

		while (head != NULL)
		{
			f = head->next;
			free(head);
			head = f;
		}
		free(head);
}
