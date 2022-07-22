#include "lists.h"

/**
* add_dnodeint_end - function
* @head: linked lists
* @n: Number
* Description: that adds a new node at the end of a dlistint_t
* Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *end;

	n_node = malloc(sizeof(dlistint_t));
	end = *head;
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = n_node;
	n_node->prev = end;
	return (n_node);
}
