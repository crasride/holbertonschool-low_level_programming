#include "variadic_functions.h"

/**
* print_c - function print character
* @c: character
* Return: void
*/
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
* print_i - functions prints int
* @i: int
* Return: void
*/
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
* print_f - function prints float
* @f: float
* Return: void
*/
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
* print_s - function prints string
* @s: string
* Return: void
*/
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
* print_all - function print
* @format: types of arguments passed to the function
* q: command not found
*/
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t prt[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (prt[j].pt != NULL)
		{
			if (*(prt[j].pt) == format[i])
			{
				printf("%s", separator);
				prt[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
