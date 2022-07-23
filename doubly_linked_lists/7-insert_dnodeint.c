#include "lists.h"

/**
* insert_dnodeint_at_index - function
* @h: linked lists
* @idx: Index of the list where the new node should be added index 0
* @n: Number
* Description: Inserts a new node at a given position
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node;
	dlistint_t *end;

	end = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx > 1)
	{
		end = end->next;
		if (end == NULL)
			return (NULL);
		idx--;
	}
	if (end->next == NULL)
		return (add_dnodeint_end(h, n));

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = end;
	n_node->next = end->next;
	end->next->prev = n_node;
	end->next = n_node;
	return (n_node);
}
