#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
*get_nodeint_at_index - check the code
*@head: head
*@index: variable
*Return: Always 0.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s;

if (head == NULL)
return (NULL);
head = head->next;
for (s = 0; s < index; s++)
{
return (head);
}
}
