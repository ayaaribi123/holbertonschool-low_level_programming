#include "lists.h"
/**
*add_dnodeint_end - adds a new node at the end of a dlistint_t list
*@head: variable
*@n: variable
* Return: Always EXIT_SUCCESS.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *s, *end;

	s = malloc(sizeof(dlistint_t));
	if (s == NULL)
		return (NULL);

	s->n = n;
	s->next = NULL;

	if (*head == NULL)
{

		s->prev = NULL;
		*head = s;
		return (s);
}
	end = *head;
	while (end->next != NULL)

		end = end->next;

	end->next = s;
	s->prev = end;

return (s);
}
