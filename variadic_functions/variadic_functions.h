#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>


/**
* struct print - print type with corresponding print function
* @t: print type
* @f: print function
*/

typedef struct print
{
	char *pt;
	void (*f)(va_list);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif /* variadic_functions.h */
