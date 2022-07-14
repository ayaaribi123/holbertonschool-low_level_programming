#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
*free_listint2 - check the code
*@head: head
*Return: Always 0.
*/
void free_listint2(listint_t **head)
{
		listint_t *f;

		if (head == NULL)
				return;
		while(*head != NULL)
		{
			f = (*head)->next;
			free (*head);
			*head = f;
		}
		head = NULL;
}
