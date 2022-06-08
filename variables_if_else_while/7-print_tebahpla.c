#include <stdio.h>
/**
* main - the lowercase alphabet in reversF
* Followeb by a newline
* Return: print 0
*/
int main(void)
{
	int ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
