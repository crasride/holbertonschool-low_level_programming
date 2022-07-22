#include "lists.h"

/**
* free_dlistint - function
* @head: linked lists
* Description:  that frees a dlistint_t list
* Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *end;

	end = head;
	while (head)
	{
		end = head;
		head = head->next;
		free(end);
	}
	free(head);
}
