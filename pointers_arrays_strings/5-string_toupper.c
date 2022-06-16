#include "main.h"

/**
* string_toupper - function
* @s: string to change
* Description: that changes all lowercase letters of a string to uppercase
* Return: address of s
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
