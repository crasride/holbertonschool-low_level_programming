#include "function_pointers.h"

/**
* print_name - funtion
* @name: print
* @f: function to print
* Description: that prints a name
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
