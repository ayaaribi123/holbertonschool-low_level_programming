#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
*add_node_end - check the code
*@head: head
*@str: char
*Return: Always 0.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *l;
	list_t *e;

	if (str == NULL)
	{
	return (NULL);
	}
	l = malloc(sizeof(list_t));
		if (l == NULL)
		{
		return (NULL);
		}
		l->str = strdup(str);
		l->len = strlen(str);
		l->next = NULL;
		if (*head == NULL)
		{
		*head = l;
		return (l);
		}
		e = *head;
		while (e->next)
		e = e->next;
		e->next = l;
		return (l);
}
