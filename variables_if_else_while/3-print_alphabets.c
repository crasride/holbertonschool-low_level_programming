#include <stdio.h>
/**
* main - prints the alphabet in lowercase, uollowecsse by a new line
* Return: print 0
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
