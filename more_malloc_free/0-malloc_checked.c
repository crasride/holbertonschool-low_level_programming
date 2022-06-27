#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* malloc_checked - function
* @b: unsigned int operand
* Description: allocates function memory using malloc
* Return: a pointer to allocated memory/cause normal process termination (98)
*/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
