#include "main.h"
#include <stdlib.h>

/**
* _calloc - function
* @nmemb: number of elements the array
* @size: size in bytes
* Description : allocates memory for an array, using malloc
* Return: void pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
