#include "lists.h"

/**
* add_node_end - function
* @head: head
* @str: string
* Description: adds a new node at the end of a list_t list
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cache, *Firstnode;
	int length, index = 0;
	char *dupstr;

	dupstr = strdup(str);

	while (*str)
	{
		index++;
		str++;
	}
	length = index;
	if (!dupstr)
		return (NULL);
	Firstnode = malloc(sizeof(list_t));
	if (!Firstnode)
		return (NULL);
	Firstnode->str = dupstr;
	Firstnode->len = length;
	Firstnode->next = NULL;
	if (*head == NULL)
		*head = Firstnode;
	else
	{
		cache = *head;
		while (cache->next != NULL)
			cache = cache->next;
		cache->next = Firstnode;
	}
	return (Firstnode);
}
