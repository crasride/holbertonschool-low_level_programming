#include "lists.h"

/**
* insert_nodeint_at_index - function
* @head: pointer first node
* @idx: index where the new node is added
* @n: data insert the new node
* Description: inserts a new node at a given position
* Return: pointer to the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *cache = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || head == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; cache && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = cache->next;
			cache->next = newnode;
			return (newnode);
		}
		else
			cache = cache->next;
	}
	return (NULL);
}
