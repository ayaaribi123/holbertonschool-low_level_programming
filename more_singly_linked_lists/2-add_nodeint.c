#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
* add_nodeint - check the code
*@head: head
*@str: char
* Return: Always 0.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
			return (NULL);
		add->n = n;
		add->next = *head;
		*head = add;
		return(add);
}
