#include "main.h"

/**
* read_textfile - functions
* @filename: name the file to read
* @letters: number letters it should read and print
* Description : reads text file and prints it to the POSIX standard output
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *cache;
	ssize_t lenread, lenwrite;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	cache = malloc(sizeof(char) * letters);
	if (!cache)
	{
		close(fd);
		return (0);
	}
	lenread = read(fd, cache, letters);
	close(fd);
	if (lenread == -1)
	{
		free(cache);
		return (0);
	}
	lenwrite = write(STDOUT_FILENO, cache, lenread);
	free(cache);
	if (lenread != lenwrite)
		return (0);
	return (lenwrite);
}
