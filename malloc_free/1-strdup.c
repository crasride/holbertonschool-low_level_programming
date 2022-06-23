#include "main.h"
#include <stdlib.h>

/**
* _strdup - function
* @str: string to duplicate
* Description: which contains a copy of the string given as a parameter
* Return: NULL if str = NULL On success NULL if insufficient mem was available
*/

char *_strdup(char *str)
{
	char *copy, *strc, *copyini;
	int strSize = 0;

	if (str == NULL)
		return (NULL);
	strc = str;
	while (*(str + strSize))
		strSize++;
	copy = malloc(sizeof(*str) * (strSize + 1));
	if (copy == NULL)
		return (NULL);
	copyini = copy;
	while (*strc)
		*copy++ = *strc++;
	*copy = '\0';
	return (copyini);
}
