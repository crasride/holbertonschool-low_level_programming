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
	int i = 0;

	if (!str)
		return (NULL);
	Firstnode = malloc(sizeof(list_t));
	if (Firstnode)
	{
		Firstnode->str = strdup(str);
		if (!Firstnode->str)
		{
			free(Firstnode);
			return (NULL);
		}
		while (Firstnode->str[i])
			i++;
		Firstnode->len = i;
		Firstnode->next = *head;
		*head = Firstnode;

		return (Firstnode);
	}
	return (NULL);
}
