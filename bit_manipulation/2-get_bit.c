#include "main.h"

/**
* get_bit - function
* @n: number to search
* @index: index the bit
* Description :  that returns the value of a bit at a given index
* Return: value of the bit at index index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > 63)
		return (-1);
	value_bit = (n >> index) & 1;
	return (value_bit);
}

