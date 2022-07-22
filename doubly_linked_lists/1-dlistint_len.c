#include "lists.h"

/**
* print_dlistint_len - functions
* @h: head of doubly linked list
* Return: the number of nodes
* Description : the number of elements in a linked dlistint_t list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
