#include "main.h"
/**
* puts2 - function
* @str: operand and array
* Description: prints every other character a string, start the first character
* Return: always
*/
void puts2(char *str)
{
	int o = 0;

	while (*(str + o))
	{
		_putchar(*(str + o));
		o = o + 2;
	}
	_putchar('\n');
}
