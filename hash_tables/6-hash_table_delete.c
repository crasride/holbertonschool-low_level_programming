#include "hash_tables.h"

/**
* hash_table_delete - prints a hash table
* @ht: hash table to print
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *cache;
	unsigned long int j;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			node = ht->array[j];
			while (node != NULL)
			{
				cache = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = cache;
			}
		}
	}
	free(head->array);
	free(head);
}
