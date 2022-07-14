#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
* add_nodeint_end - check the code
*@head: head
*@n: char
* Return: Always 0.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *a;

add = malloc(sizeof(listint_t));
if (add == NULL)
return (NULL);
add->n = n;
add->next = NULL;

	if (*head == NULL)
{
		*head = add;
		return (*head);
}
	a = *head;
	while (a->next)
		a = a->next;
	a->next = add;
	return (add);
}
