#include "lists.h"

/**
* pop_listint - function
* @head: pointer to the first element in the linked list
* Description: deletes the head node of a listint_t linked list
* Return: returns the head node’s data (n), 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *cache;
	int numelements;

	if (head == NULL || *head == NULL)
		return (0);

	numelements = (*head)->n;
	cache = (*head)->next;
	free(*head);
	*head = cache;

	return (numelements);
}
