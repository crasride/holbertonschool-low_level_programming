#include "main.h"

/**
* _strcmp - function
* @s1: first string
* @s2: second string
* Description: that compares two strings.
* Return: outputs the  s1 and s2
*/
int _strcmp(char *s1, char *s2)
{
	int o = 0;

	while (*(s1 + o) && *(s2 + o) && (*(s1 + o) == *(s2 + o)))
		o++;
	return (*(s1 + o) - *(s2 + o));
}
