#include "lists.h"

/**
* delete_nodeint_at_index - function
* @head: pointer first element in list
* @index: index node to delete
* Description: deletes the node at index index of a listint_t linked list
* Return: 1 if it succeeded, -1 if it failed
* where index is index of the node that should be deleted. Index starts at 0
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cache = *head;
	listint_t *present = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cache);
		return (1);
	}
	while (i < index - 1)
	{
		if (!cache || !(cache->next))
			return (-1);
		cache = cache->next;
		i++;
	}
	present = cache->next;
	cache->next = present->next;
	free(present);
	return (1);
}
