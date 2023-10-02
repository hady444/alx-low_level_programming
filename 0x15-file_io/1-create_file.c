#include "main.h"
#include <string.h>
/**
 * create_file - a function creates a file
 * @filename: file path or name
 * @text_content: content of file
 * Return: return 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
