#include "variadic_functions.h"

/**
* sum_them_all - function
* @n: number  arguments
* @...: arguments
* Description: that returns the sum of all its parameters
* Return: sum / n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, const unsigned int);
	}
	va_end(args);
	return (sum);
}
