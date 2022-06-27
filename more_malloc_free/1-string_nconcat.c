#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function
* @s1: first string
* @s2: second string
* @n: followed by the first n bytes of s2
* Description :that concatenates two strings
* Return: pointer shall point to a newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, b, c;
	char *p;

	if (!s1)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (!s2)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}
	if (n >= b)
		b = n;
	p = malloc(sizeof(char) * (i + b + 1));
	if (!p)
		return (NULL);
	for (c = 0; c < i; c++)
		p[c] = s1[c];
	for (c = 0; c < b; c++)
		p[c + i] = s2[c];
	p[i + b] = '\0';
	return (p);
}
