#include "main.h"
/**
* print_alphabet - the lowercase alphabet
* Followeb by a newline
* Return: print 0
*/
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
}
