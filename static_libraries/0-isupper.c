#include "main.h"
/**
* _isupper - function that checks for uppercase characte.
* @c: operand
* Return: 1 if uppercase, 0 otherwise
*/
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}