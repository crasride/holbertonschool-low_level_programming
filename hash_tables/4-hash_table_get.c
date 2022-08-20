#include "hash_tables.h"

#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: is the hash table you want to look into
* @key: is the key you are looking for
* Return: Value associated Key or NULL if key couldnt be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* check Status and return NULL*/
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}
