#include "main.h"
/**
* print_triangle -function that prints a triangle, followed by a new line.
* @size: the squares triangle
* Return: null
*/
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		a = 0;
	while (a < size)
	{
		for (b = size - a; b > 1; b--)
		{
			_putchar(32);
		}
		for (c = 0; c <= a; c++)
		{
			_putchar(35);
		}
		a++;
		_putchar('\n');
	}
}
