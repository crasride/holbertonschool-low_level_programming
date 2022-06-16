#include "main.h"

/**
* _strncpy - function
* @dest: string to copy to
* @src: string being copied
* @n: number bytes to copy
* Description: that copies a string.
* Return: address of dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int o;

	o = 0;
	while (o < n && *(src + o))
	{
		*(dest + o) = *(src + o);
		o++;
	}
	while (o < n)
	{
		*(dest + o) = '\0';
		o++;
	}
	return (dest);
}
