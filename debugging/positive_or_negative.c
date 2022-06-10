#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* positive_or_negative - gives the correct output
* @n: oprenad
* Return: 0
*/
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);

	if (n == 0)
		printf("%d is zero\n", n);

	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
