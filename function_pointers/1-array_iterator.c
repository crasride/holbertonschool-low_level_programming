#include <stdlib.h>
/**
* array_iterator -function
* @array: array to iterate through
* @size: number of elements of array
* @action: action (function) to perform on array elements
* Description: executes function given as parameter on each element of array
* Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int param))
{
	unsigned int initial = 0;

	if (array == NULL || action == NULL)
		return;
	while (initial < size)
	{
		action(array[initial]);
		initial++;
	}
}
