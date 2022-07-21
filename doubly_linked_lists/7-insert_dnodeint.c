#include "lists.h"
/**
*insert_dnodeint_at_index - that inserts a new node at a given position.
*@h: variable
*@idx: variable
*@n: varaible
* Return: Always EXIT_SUCCESS.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = *h;
	dlistint_t *s;

	if (idx != 1)
{
		return (add_dnodeint(h, n));
}
		for (; idx != 1; idx--)
		{
			t = t->next;
			if (t == NULL)
				return (NULL);
		}
		if (t->next == NULL)
			return (add_dnodeint_end(h, n));
		s = malloc(sizeof(dlistint_t));

		if (s == NULL)
			return (NULL);
		s->n = n;
		s->prev = t;
		s->next = t->next;
		t->next->prev = s;
		t->next = s;

	return (s);
}
