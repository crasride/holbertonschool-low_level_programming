#include "main.h"

/**
* _strchr - function
* @s: string to search
* @c: character to check
* Description: locates a character in a string
* Return: pointer to spot in s with c or null
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		return (s + i);
	}
	if (*(s + i) == c)
	return (s + i);
	return (0);
}
