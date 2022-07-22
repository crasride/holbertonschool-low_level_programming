#include "lists.h"

/**
* sum_dlistint - function
* @head: pointer to head
* Description: sum of all the data (n) of a dlistint_t linked list
* Return: sum of data or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
