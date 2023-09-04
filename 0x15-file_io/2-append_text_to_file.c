#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	write(file, text_content, i);
	close(file);
	return(1);
}
