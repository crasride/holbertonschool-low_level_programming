#include "variadic_functions.h"

/**
* print_strings - function
* @separator: string to be printed between strings
* @n: number of strings passed to the function
* @...: arguments
* Description: that prints strings, followed by a new line
* Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
