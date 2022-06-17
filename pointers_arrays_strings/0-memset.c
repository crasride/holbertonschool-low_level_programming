#include "main.h"

/**
* _memset - function
* @s: bytes of the memory area pointed
* @b: constant byte
* @n: fills the first
* Description: that fills memory with a constant byte
* Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
