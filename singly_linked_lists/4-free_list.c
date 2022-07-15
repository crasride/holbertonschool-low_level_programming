#include "lists.h"

/**
* free_list -function
* @head: prt head
* t - functions
* Description:  function that frees a list_t list
* Return: 0
*/
void free_list(list_t *head)
{
	list_t *cache = head; /* Store head ->next*/

	while (head != NULL)
	{
		cahe = head; /* release within what the head i*/

		free(cache->str);
		free(cache);
		head = head->next; /* moves on to the next node and repeats the process*/
	}
}
