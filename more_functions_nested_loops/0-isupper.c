#include "main.h"
/*
* _isupper - function
* @c: operand
* Description: that checks for uppercase character.
* Return: 1 if uppercase, 0 otherwise
*/
int _isupper(int c)
{
	while (c == 'A')
	{
	_putchar(':');
	_putchar(' ');
	return (1);
	}
	while (c == 'a')
	{
	_putchar(':');
	_putchar(' ');
	return (0);
	}
	return (c);
}
