#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
*sum_listint - check the code
*@head: head
*Return: Always 0.
*/
int sum_listint(listint_t *head)
{
	int s;

	if (head == NULL)
			return (0);
	while (head != NULL)
	{
			s = s + head->n;
			head = head->next;
	}
	return (s);
}
