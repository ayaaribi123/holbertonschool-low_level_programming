#include "lists.h"
/**
*add_dnodeint - adds a new node at the beginning of a dlistint_t list.
*@head: variable
*@n: variable
* Return: Always EXIT_SUCCESS.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *s;

	s = malloc(sizeof(dlistint_t));
	if (s == NULL)
		return(NULL);

	s->n = n;
	s->prev = NULL;
	s->next = *head;

	if (*head != NULL)

		(*head)->prev = s;
	*head = s;

return (s);
}
