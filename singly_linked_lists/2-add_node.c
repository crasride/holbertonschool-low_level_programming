#include "lists.h"

/**
* add_node - function
* @head: list to add
* @str: string to duplicate
* Description: add nodes to the list_t list.
* Return: address of new element or NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *Firstnode;
	int length, index = 0;
	char *dupstr;

	dupstr = strdup(str);

	while (*str)
	{
		index++;
		str++;
	}
	length = index;
	if (dupstr == NULL)
		return (NULL);
	Firstnode = (list_t *)malloc(sizeof(list_t));
	if (Firstnode == NULL)
		return (NULL);
	Firstnode->str = dupstr;
	Firstnode->len = length;
	Firstnode->next = *head;
	*head = Firstnode;
	return (Firstnode);
}
