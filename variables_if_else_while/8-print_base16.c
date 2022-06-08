#include <stdio.h>
/**
* main -  the numbers of base 16 in lowercase
* Followed by a newline
* Return: print 0
*/
int main(void)
{
	int n = '0';
	char ch = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
