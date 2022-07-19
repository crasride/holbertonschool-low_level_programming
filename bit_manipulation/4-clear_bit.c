#include "main.h"

/**
* clear_bit - function
* @n: pointer to the number to change
* @index: index of the bit to clear
* Description : that sets the value of a bit to 0 at a given index.
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 00111111) /* Decimal 63 */
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
