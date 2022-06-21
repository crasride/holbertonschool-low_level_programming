#include "main.h"
/**
* _strcat - function
* @dest: string to append by src
* @src: string to append to dest
* Description: appends the src string to the dest string, overwriting the
* end null byte (\0) the end of dest, and then adds a end null byte
* Return: address  dest
*/
char *_strcat(char *dest, char *src)
{
	int p, j;

	for (p = 0; dest[p]; p++)
		;
	for (j = 0; src[j]; j++)
	{
		dest[p] = src[j];
		p++;
	}
	return (dest);
}
