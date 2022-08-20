#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table you want add or update the key
* @key: key
* @value: value associated the key
* Return: 1 succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cp_val;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key  == '\0' || value == NULL)
		return (0);

	cp_val = strdup(value); /* Rtr pointer to a new string */
	if (cp_val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp_val;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cp_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cp_val;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
