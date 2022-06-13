#include "main.h"

/**
* print_numbers - that prints the numbers, from 0 to 9,new line
*
* Return: void
*/

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
}
