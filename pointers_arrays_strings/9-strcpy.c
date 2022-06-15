#include "main.h"

/**
* _strcpy - function
* @dest: destination of copy
* @src: source to copy
* Desciption:  the string pointed, by srcterminating null to buffer p by dest
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int origin = 0;

	while (*(src + origin))
	{
		*(dest + origin) = *(src + origin);
		origin++;
	}
	*(dest + origin) = '\0';
	return (dest);
}
