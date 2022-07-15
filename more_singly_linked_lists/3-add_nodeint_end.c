#include "lists.h"

/**
* add_nodeint_end - functions
* @head: pointer to the first element in the list
* @n: data to insert in the new element
* Description: adds a new node at the end of a listint_t list
* Return: the address new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *cache = *head;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (cache->next)
		cache = cache->next;
	cache->next = newnode;
	return (newnode);
}
