#include "main.h"

/**
* binary_to_uint - function
* @b: string binary chars
* Description: that converts a binary number to an unsigned int
* Return:the converted number or 0 if one more chars in the str b is not 0 or 1
* b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (!b)
		return (0);

	for (i = 0; *b; b++)
	{
		if (*b == '1')
			i = (i << 1) | 1;
		else if (*b == '0')
			i = i << 1;
		else
			return (0);
	}
	return (i);
}
