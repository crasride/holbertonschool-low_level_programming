#include <stdio.h>
#include <stdlib.h>


/**
* main - that multiplies two numbers
* @argc: number  arguments
* @argv: array  arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int num, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (num = 1; num < argc; num++)
		result *= atoi(argv[num]);
	printf("%d\n", result);
	return (0);
}
