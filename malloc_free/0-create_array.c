#include "main.h"
#include <stdlib.h>

/**
* create_array - function
* @size: array to created
* @c: char to ini array
* Description: creates an array chars, and initializes it with a specific char
* Return: NULL if size = 0 / a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
