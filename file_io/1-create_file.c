#include "main.h"

/**
* create_file -  function
* @filename: filename to create
* @text_content: text copy into new file
* Description : creates a file terminated string to write to the file
* Return: 1 on success, -1 on failure (file can not be created, or written,
* or write fails, etc).
*/
int create_file(const char *filename, char *text_content)
{
	int fd, failure, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC,  S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	while (text_content && *(text_content + len))
		len++;
	failure = write(fd, text_content, len);
		close(fd);
	if (failure < 0)
		return (-1);
	return (1);
}
