#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print numbers from n to 98,
* followed by a new line
* @n: print  number
*/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
	printf("%d, ", n);
	n--;
	}
	if (n == 98)
	printf("%d", n);
	printf("\n");
}
