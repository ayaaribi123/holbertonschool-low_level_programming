#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
* add_node - check the code
*@head: head
*@str: char
* Return: Always 0.
*/
list_t *add_node(list_t **head, const char *str)
{
		list_t *l;

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
		if (l->str == NULL)
		{
		return (NULL);
		}
			l->len = strlen(str);
			l->next = *head;
			*head = l;
			return (l);
}
