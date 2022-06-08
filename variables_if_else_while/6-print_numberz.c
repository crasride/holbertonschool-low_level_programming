#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting from 0
* Followed by a new line use the putchar function
* Return: print 0
*/
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
