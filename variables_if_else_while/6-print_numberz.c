#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting from 0
* Followed by a new line use the putchar function
* Return: print 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 8; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
