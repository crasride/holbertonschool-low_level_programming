#include "variadic_functions.h"
/**
* print_numbers - functions
* @n: number integers passed to the function
* @separator: string to be printed between numbers
* Description: that prints numbers, followed by a new line
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(l, int));
		else if (separator && i == 0)
			printf("%d", va_arg(l, int));
		else
			printf("%s%d", separator, va_arg(l, int));
	}
	va_end(l);
	printf("\n");
}
