#include "function_pointers.h"
/**
* int_index - function
* @array: array search integers
* @size: number of elements in the array
* @cmp:  to be used to compare values
* Description: gets the index of an array element
* Return: no element matches -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int initial;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	for (initial = 0; initial < size; initial++)
	{
		if (cmp(array[initial]))
			return (initial);
	}
	return (-1);
}
