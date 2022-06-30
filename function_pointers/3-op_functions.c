#include "3-calc.h"


/**
* op_add - addition a and b
* @a: first
* @b: second
* Return: returns the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtraction b from a
* @a: first
* @b: second
*
* Return: returns the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplication a and b
* @a: first
* @b: second
* *
* Return: returns the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division a by b
* @a: first
* @b: second
* *
* Return: returns the result of the division of a by b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - modulo a by b
* @a: first
* @b: second
*
* Return: returns the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
