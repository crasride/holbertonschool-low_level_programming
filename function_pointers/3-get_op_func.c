#include "3-calc.h"
#include <string.h>
/**
* get_op_func - function
* @s: the operator given by the user
* Description: pointer that selects the correct function to perfor
* Return: pointer to the function that corresponds
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {

		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
