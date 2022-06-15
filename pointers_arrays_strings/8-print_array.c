#include "main.h"

/**
* print_array - function
* @a: array to print
* @n: number of elements of the array to be printed
* Description: prints n elements in the array a
* Return: void
*/
void print_array(int *a, int n)
{
	int origin = 0;

	while (origin < n)
	{
		printf("%d", a[origin]);
		if (origin < (n - 1))
		printf(", ");
		origin++;
	}
	printf("\n");
}
