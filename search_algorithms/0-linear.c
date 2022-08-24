#include "search_algos.h"

/**
* linear_search - that searches for a value in an array of integers
* using the Linear search algorithm
* @array: Pointer the first element of the array to search
* @size: the number of elements in array
* @value: value to search for
* Return: If value is not present in array or if array is NULL, your function
* must return -1.
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
