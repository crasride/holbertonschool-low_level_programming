#include "lists.h"

/**
* delete_dnodeint_at_index - function
* @head: linked lists
* @index: Index the list
* Description: deletes the node at index index of a dlistint_t
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *end = *head;

	if (*head == NULL)
		return (-1);
	while (index > 0)
	{
		if (end == NULL)
			return (-1);
		end = end->next;
		index--;
	}
	if (end == *head)
	{
		*head = end->next;
		(*head)->prev = NULL;
	}
	else
	{
		end->prev->next = end->next;
		if (end->next)
			end->next->prev = end->prev;
	}
	free(end);
	return (1);
}
