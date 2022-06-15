#include "main.h"
/**
* puts_half - function
* @str: string to print
* Description : print the second half of the string
* Return: void
*/
void puts_half(char *str)
{
	int second, o = 0;

	while (*(str + o))
		o++;
	second = o / 2;
	if (o % 2)
	second += 1;
	while (second < o)
	{
		_putchar(*(str + second));
		second++;
	}
	_putchar('\n');
}
