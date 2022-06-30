#include "3-calc.h"

/**
* main - performs simple operations
* @argc: number of arguments passed
* @argv: array of pointers to arguments
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int s1, s2, r;
	char op;
	int (*f2)(int, int);

	if (argc != 4)
	{/** number of arguments is wrong, print Error */
		printf("Error\n");
		exit(98);
	}

	/** 'atoi' to convert arguments to int */
	s1 = atoi(argv[1]);
	s2 = atoi(argv[3]);

	/**  returns a pointer to the function that corresponds */
	f2 = get_op_func(argv[2]);

	if (f2 == NULL)
	{/**the operator is none of the above, print Error */
		printf("Error\n");
		exit(99);
	}
	op = *argv[2];
	if ((op == '/' || op == '%') && s2 == 0)
	{/** divide (/ or %) by 0, print Error */
		printf("Error\n");
		exit(100);
	}
	r = f2(s1, s2);
	printf("%d\n", r);
	return (0);
}
