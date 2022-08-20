#include "hash_tables.h"

/**
* hash_table_print - prints a hash table.
* @ht: hash table to print
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char state = 0;

	if (ht == NULL)
		return;
	/* print first bracket */

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (state == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				if (node != NULL)
					printf(", ");
			}
			state = 1;
		}
	}

	/* print second bracket */
	printf("}\n");
}
