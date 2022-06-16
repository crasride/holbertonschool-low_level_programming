#include "main.h"

/**
* reverse_array - function
* @a: integer array to reversed
* @n: length of array a
* Description: that reverses the content of an array of integers
* Return: void
*/
void reverse_array(int *a, int n)
{
	int o = 0, t;

	n = n - 1;
	while (o < n)
	{
		t = *(a + o);
		*(a + o) = *(a + n);
		*(a + n) = t;
		o++;
		n--;
	}
}
