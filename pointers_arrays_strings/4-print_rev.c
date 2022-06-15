#include "main.h"
/**
* print_rev - function
* @s: operand and pointer
* Description: That prints a string, in reverse, followed by a new line.
* Return: always 0.
*/
void print_rev(char *s)
{
	int r;

	for (r = 0; s[r] != '\0'; r++)
	{
		;
	}
	r--;
	for (; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar(10);
}
