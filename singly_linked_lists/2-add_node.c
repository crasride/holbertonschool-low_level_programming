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
	list_t *new;
	int i = 0;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		while (new->str[i])
			i++;
		new->len = i;
		new->next = *head;
		*head = new;

		return (new);
	}
	return (NULL);
}
