#include "main.h"
#include <stdio.h>

/**
* print_diagsums - functions
* @a: pointer  start
* @size: matrix column
* Description: prints sum of the two diagonals of a square matrix of integers
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int p, sum, sizer;

	p = 0, sum = 0, sizer = size * size;
	while (p < sizer)
	{
		if (p % (size + 1) == 0)
			sum += a[p];
		p++;
	}
	printf("%d, ", sum);
	sum = 0;
	p = 0;
	while (p < sizer)
	{
		if (p % (size - 1) == 0 && p != (sizer - 1) && p != 0)
			sum += a[p];
		p++;
	}
	printf("%d\n", sum);
}
