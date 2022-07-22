#include "lists.h"

/**
* add_dnodeint- function
* @n: valor new node
* @head : pointer
* Description : adds a new node at the beginning of a dlistint_t list
* Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	if (*head)
		(*head)->prev = n_node;
	*head = n_node;

	return (n_node);
}
