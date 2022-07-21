#include"main.h"

/**
*main - Copy a file of another file
*@argc: Number  arguments
*@argv: Array arguments
*Return: Return 0
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}

/**
*copy_file - Copies a file
*@file_from: Origin file
*@file_to: Destination file
*Return: 0
*/
void copy_file(const char *file_from, const char *file_to)
{
	int fdfrom, fdto;
	char *cache[1024];
	ssize_t wread;

	fdfrom = open(file_from, O_RDONLY);
	fdto = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((wread = read(fdfrom, cache, 1024)) > 0)
	{
		if (write(fdto, cache, wread) != wread || fdto == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
		}
	}
	if (wread == -1 || fdfrom == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
	}
	if (close(fdfrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdfrom);
		exit(100);
	}
	if (close(fdto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdto);
		exit(100);
	}
}
