#include "main.h"

/**
* _memcpy - function
* @dest: area copy
* @src: memory area to copy
* @n: number bytes to copy
* Description: copies memory area
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
