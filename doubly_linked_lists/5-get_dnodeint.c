#include "lists.h"

/**
* get_dnodeint_at_index - funtion
* @head: pointer
* @index: index node to return
* Description: eturns the nth node of a dlistint_t linked list
* Return: the nth node or if it does not exist, NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
