#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - function
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
* description : creates an array of integers
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = 1;
	size += max - min;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
