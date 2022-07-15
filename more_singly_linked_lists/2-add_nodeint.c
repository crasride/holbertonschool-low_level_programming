#include "lists.h"

/**
* add_nodeint - functions
* @head: pointer to the first node in the list
* @n: insert in new node
* Description: unction adds a new node at the beginning of a listint_t list
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
