#include "main.h"
/**
*_puts - function
* @str: operand and pointer
*
* Description: prints a string, followed by a new line to stdout
* Return: always 0
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
