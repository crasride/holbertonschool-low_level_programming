#include <stdio.h>
#include <stdlib.h>
/**
* main - that adds positive numbers
* @argc: number counts arguments
* @argv: array  arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i])) /* non num */
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
