#include "lists.h"
/**
*sum_dlistint - rreturns the sum of all the data (n
*@head: variable
* Return: Always EXIT_SUCCESS.
*/
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		s += head->n;
		head = head->next;
	}
return (s);
}
