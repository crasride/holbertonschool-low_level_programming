#include "lists.h"

/**
* sum_listint - function
* @head: first node  linked list
* Description: sum of all the data (n) of a listint_t linked list
* Return: sum
*/
int sum_listint(listint_t *head)
{
	int sumelements = 0;
	listint_t *cache = head;

	while (cache)
	{
		sumelements += cache->n;
		cache = cache->next;
	}
	return (sumelements);
}
