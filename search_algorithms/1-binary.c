#include "search_algos.h"

/**
* print_array - print out the elements an array
* @array: array to print
* @size: number of elements in array
*/
void print_array(int *array, size_t size)
{
	printf("Searching in array: %d", *array++);
	while (--size)
		printf(", %d", *array++);
	printf("\n");
}

/**
* binary_search - binary search element in array
* @array: Pointer to the first element of the array to search
* @size: size of array
* @value: value to search for
* Return: index element equal to value or -1 if not present
* array is NULL or empty.
*/
int binary_search(int *array, size_t size, int value)
{
	int r;
	size_t mid = (size - 1) / 2;

	if (!array || size == 0)
		return (-1);
	print_array(array, size);
       /* If the element is present at the middle */
	if (value == array[mid])
		return (mid);

	if (value < array[mid])
		return (binary_search(array, mid + 1, value));
	r = binary_search(array + mid + 1, size - mid - 1, value);
	if (r == -1)
		return (-1);
	return (mid + 1 + r);
}
