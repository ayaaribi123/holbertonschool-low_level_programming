#include "lists.h"
/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
*@head: variable
*@index: variable
* Return: Always EXIT_SUCCESS.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *s;
	unsigned int i = 0;

if (head == NULL)
return (NULL);
s = head;
while (s != NULL)
{
if (i == index)
{
return (s);
i++;
s = s->next;
}
}
return (NULL);
}
