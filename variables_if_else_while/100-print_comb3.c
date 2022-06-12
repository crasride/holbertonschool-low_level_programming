#include <stdio.h>

/**
* main - all possible different combinations of two digits, print 00 to 99
* Return: Always 0
*/

int main(void)
{
	int first, second;

	for (second = '0'; second <= '9'; second++) /*print second place*/
	{
	for (first = '0'; first <= '9'; first++) /*print first*/
	{
	putchar(second);
	putchar(first);
	if (!(second == '9' && first == '9')) /*do not print the comma at the end*/
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
