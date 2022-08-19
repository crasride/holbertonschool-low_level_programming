#include "hash_tables.h"

/**
* key_index - index with function djb2 and size
* @size: size the arrays the hash table
* @key: key the index
* Return: the index at which the key/value
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
