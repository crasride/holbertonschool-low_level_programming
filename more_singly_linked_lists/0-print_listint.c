#include "lists.h"

/**
* print_listint - functions
* @h: linked list of type listint_t to print
* Descriptions: prints all the elements of a listint_t list.
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t numelements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numelements++;
		h = h->next;
	}
	return (numelements);
}
