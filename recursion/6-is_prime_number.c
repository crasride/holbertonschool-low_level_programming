#include "main.h"

/**
* prime_verify - function
* @f: operand
* @pr: prime number
* Description: verify to if number is prime
* Return: 1 if prime, 0 if not
*/
int prime_verify(int f, int pr)
{
	if (pr < 2 || pr % f == 0)
		return (0);
	else if (f > pr / 2)
		return (1);
	else
		return (prime_verify(f + 1, pr));
}
/**
* is_prime_number - function
* @n: number
* Description: states if number is prime
* Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_verify(2, n));
}
