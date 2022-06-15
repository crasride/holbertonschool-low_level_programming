#include "main.h"
/**
* rev_string - function
* @s: operand and array
* Description: Write a function that reverses a string.
* Return: always
*/
void rev_string(char *s)
{
	int origin = 0, reverse = 0;

	while (s[origin])
	{
		origin++;
	}
	while (--origin > reverse)
	{
		char front = s[reverse];
		char back = s[origin];

		s[reverse] = back;
		reverse++;
		s[origin] = front;
	}
}
