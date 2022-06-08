#include"main.h"
/**
* print_alphabet_x10 - print alphabet 10x
* prints 10 times the alphabet, in lowercase
*/
void print_alphabet_x10(void)
{
	char ch = 'a';
	int c = 0;

	while (c < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		c++;
		_putchar(10);
	}
}
