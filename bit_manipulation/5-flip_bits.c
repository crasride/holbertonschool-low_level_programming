#include "main.h"

/**
* flip_bits - funtion
* @n: first number
* @m: second number
* Description: counts number of bits to change
* Return: the number of bits you would need to flip to get
* from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int present;
	unsigned long int op = n ^ m;

	for (i = 63; i >= 0; i--)  /* Binary  0011 1111*/
	{
		present = op >> i;
		if (present & 1)
			counter++;
	}
	return (counter);
}
