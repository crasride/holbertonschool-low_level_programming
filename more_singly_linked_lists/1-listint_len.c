#include "lists.h"

/**
* listint_len - functions
* @h: linked list of type listint_t to traverse
* Description: returns the number of elements in a linked listint_t list
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t numelements = 0;

	while (h)
	{
		numelements++;
		h = h->next;
	}
	return (numelements);
}
