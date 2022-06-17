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
	unsigned int o;

	for (o = 0; o < n; o++)
	{
		*(s + o) = b;
	}
	return (s);
}
