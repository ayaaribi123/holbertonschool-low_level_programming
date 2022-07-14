#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
*pop_listint - check the code
*@head: head
*Return: Always 0.
*/
int pop_listint(listint_t **head)
{
	listint_t *s;
	int i;

	if (*head == NULL)
	return (0);
	s = (*head)->next;
	i =(*head)->n;
	free(*head);
	*head = s;
	return (i);
}
