#include "lists.h"

/**
* free_listint2 - functions
* @head: ptr the listint_t list to free
* Description:  frees a listint_t list
*/
void free_listint2(listint_t **head)
{
	listint_t *cache;

	if (head == NULL)
		return;
	while (*head)
	{
		cache = (*head)->next;
		free(*head);
		*head = cache;
	}
	*head = NULL;
}
