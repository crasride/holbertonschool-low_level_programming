#include "main.h"

/**
* _strncat - function
* @dest: string to src
* @src: string to dest
* @n: umber bytes to append
* Description: concatenates two strings
* Return: string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int o, j;

	o = j = 0;
	while (*(dest + o))
		o++;
	while (j < n && *(src + j))
	{
		*(dest + o) = *(src + j);
		o++;
		j++;
	}
	if (j < n)
		*(dest + o) = *(src + j);
	return (dest);
}
