#include "main.h"

/**
* sqrt_search - function
* @s: operand
* @f: operand search
* Description: search for the square of f
* Return: -1 or sqrt of f
*/
int sqrt_search(int s, int f)
{
	if (s * s == f)
		return (s);
	if (s * s > f)
		return (-1);
	return (sqrt_search(s + 1, f));
}
/**
* _sqrt_recursion - function
* @n: operand
* Description: that returns the natural square root of a number
* Return: natural square root -1
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (sqrt_search(1, n));
}
