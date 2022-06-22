#include <stdio.h>

/**
* main -that prints its name
* @argc: number  arguments
* @argv: array  arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (!*argv)
		return (-1);
	printf("%d\n", argc - 1);
	return (0);
}
