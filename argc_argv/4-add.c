#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - that adds positive numbers
* @argc: number counts arguments
* @argv: array  arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int r = 0, i, s;

	for (i = 1; i < argc; i++)
	{
		for (s = 0; argv[i][s]; s++)
		{
			if (isdigit(argv[i][s]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		r += atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);
}
