#include "lists.h"

/**
* get_nodeint_at_index - funtion
* @head: first node
* @index: index of the node return
* Description: that returns the nth node of a listint_t linked list
* where index is the index of the node, starting at 0
* Return: node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *cache = head;

	while (cache && i < index)
	{
		cache = cache->next;
		i++;
	}
	return (cache ? cache : NULL);
}
