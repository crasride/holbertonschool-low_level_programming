#include "main.h"

/**
* print_line - n is the number of times the character
* @n: number of times printed
* Return: void
*/
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
