#include "lists.h"

/**
* free_listint - function
* @head: listint_t list freed
* description:  that frees a listint_t list
*/
void free_listint(listint_t *head)
{
	listint_t *cache;

	while (head)
	{
		cache = head->next;
		free(head);
		head = cache;
	}
}
