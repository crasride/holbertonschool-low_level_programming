#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
* Return: print 0
*/
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar(10);
	return (0);
}
