#include "main.h"

/**
* _strstr - function
* @haystack: string to check for needle
* @needle: substring to find in haystack
* Description: that locates a substring
* Return: pointer to beginning of needle in haystack or NULL if no match
*/
char *_strstr(char *haystack, char *needle)
{
	int chain1 = 0;
	int chain2 = 0;

	if (needle[0] == '\0')
	{
		return (&haystack[0]);
	}
	while (haystack[chain1])
	{
		if (haystack[chain1] == needle[chain2])
		{
			chain1++;
			chain2++;
			if (needle[chain2] == '\0')
			return (&haystack[chain1 - chain2]);
		}
		else
		{
			chain1++;
			chain1 = (chain1 - chain2);
			chain2 = 0;
		}
	}
	return ('\0');
}
